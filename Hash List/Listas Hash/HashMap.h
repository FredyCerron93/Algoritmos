#pragma once
#include <iostream>
#include "HashEntry.h"

using namespace std;

const int TABLE_SIZE = 128;

class Hashmap {
private:
    HashEntry** table;

public:
    Hashmap() {
        table = new HashEntry * [TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++)
            table[i] = NULL;
    }

    ~Hashmap() {
        for (int i = 0; i < TABLE_SIZE; i++)
            if (table[i] != NULL)
                delete table[i];
        delete[] table;
    }

    int get(int key) {
        int hash = (key % TABLE_SIZE);
        if (table[hash] == NULL)
            return -1;
        else {
            return table[hash]->getvalue();
        }
    }

    void put(int key, int value) {
        int hash = (key % TABLE_SIZE);
        if (table[hash] != NULL)
            delete table[hash];

        table[hash] = new HashEntry(key, value);
    }
};