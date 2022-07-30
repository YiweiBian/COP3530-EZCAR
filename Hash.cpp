#include<bits/stdc++.h>
#pragma once
#include "Vehicle.h"

using namespace std;

class Hash
{
    int BUCKET;
    int hashFactor = 31;

    list<Vehicle> *table;
    
public:
    Hash(int size)
    {
        BUCKET = size;
        table = new list<Vehicle>[BUCKET];
    }

    void insertItem(Vehicle car, int key)
    {
        int index = hashFunction(key);
        table[index].push_back(car);
    }

    void insertItem(Vehicle car, string key)
    {
        int index = hashFunction(key);
        table[index].push_back(car);
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

    int hashFunction(int x)
    {
        int index = 0;

        while (x != 0)
        {
            index += (x % 10) * hashFactor;
            x /= 10;
        }
        return index % BUCKET;
    }

    int hashFunction(string key)
    {
        int index = 0;

        for (int i = 0; i < key.length(); i++)
        {
            index += key.at(i) * hashFactor;
        }
        return index % BUCKET;
    }

    void printName()
    {
        for (int i = 0; i < BUCKET; i++)
        {
            for (auto j : table[i])
            {
                cout << j.model << endl;
            }
        }
    }
    
};


