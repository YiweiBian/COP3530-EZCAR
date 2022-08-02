#include<bits/stdc++.h>
#include "Vehicle.h"

using namespace std;

class Hash
{
    int BUCKET;
    int hashFactor = 31;
    int size = 0;

    list<Vehicle> *table;
    
public:
    Hash(int size)  // Constructor
    {
        BUCKET = size;
        if (size == 0)
        {
            BUCKET = 1;
        }
        table = new list<Vehicle>[BUCKET];
    }

    void insertItem(Vehicle car, int key) // Insert int into hashtable
    {
        if (key == -1)
        {
            key = 0;
        }
        int index = hashFunction(key);
        table[index].push_back(car);
        size++;
    }

    void insertItem(Vehicle car, string key) // insert strirng into hashtable
    {
        if (key == "-1")
        {
            key = "0";
        }
        int index = hashFunction(key);
        table[index].push_back(car);
        size++;
    }

    list<Vehicle> searchItem(string key) // search with string
    {
        int index = hashFunction(key);
        return table[index];
    }

    list<Vehicle> searchItem(int key) // search with int
    {
        int index = hashFunction(key);
        return table[index];
    }

    list<Vehicle> searchItem(float key) // search with float
    {
        int index = hashFunction(key);
        return table[index];
    }

    list<Vehicle>* getTable() // return the whole hashtable
    {
        return table;
    }

    int getSize()
    {
        return size;
    }

    int hashFunction(int x) // hash function for int
    {
        int index = 0;
        if (x == -1)
        {
            x = 0;
        }

        while (x != 0)
        {
            index += (x % 10) * hashFactor;
            x /= 10;
        }
        return index % BUCKET;
    }

    int hashFunction(float x) // hash function for float
    {
        int index = 0;
        index = x * hashFactor;

        return index % BUCKET;
    }

    int hashFunction(string key) // hash function for string
    {
        int index = 0;
        if (key == "-1")
            return 0;
        for (int i = 0; i < key.length(); i++)
        {
            index += key.at(i) * hashFactor;
        }
        return index % BUCKET;
    }
    
};


