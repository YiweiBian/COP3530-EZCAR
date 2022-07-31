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
    Hash(int size)
    {
        BUCKET = size;
        table = new list<Vehicle>[BUCKET];
    }

    void insertItem(Vehicle car, int key)
    {
        if (key == -1)
        {
            key = 0;
        }
        int index = hashFunction(key);
        table[index].push_back(car);
        size++;
    }

    void insertItem(Vehicle car, string key)
    {
        if (key == "-1")
        {
            key = "0";
        }
        int index = hashFunction(key);
        table[index].push_back(car);
        size++;
    }

    list<Vehicle> searchItem(string key)
    {
        int index = hashFunction(key);
        return table[index];
    }

    list<Vehicle> searchItem(int key)
    {
        int index = hashFunction(key);
        return table[index];
    }

    list<Vehicle> searchItem(float key)
    {
        int index = hashFunction(key);
        return table[index];
    }

    list<Vehicle>* getTable()
    {
        return table;
    }

    int getSize()
    {
        return size;
    }

    int hashFunction(int x)
    {
        int index = 0;
        if (x == -1)

        while (x != 0)
        {
            index += (x % 10) * hashFactor;
            x /= 10;
        }
        return index % BUCKET;
    }

    int hashFunction(float x)
    {
        int index = 0;

        index = x * hashFactor;

        return index % BUCKET;
    }

    int hashFunction(string key)
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


