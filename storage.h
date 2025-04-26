//
// Created by Owner on 4/25/2025.
//

#ifndef MYDATABASE_STORAGE_H
#define MYDATABASE_STORAGE_H
#include <iostream>
#include <vector>
#include <cstdint>

class storage {
public:
    class Page{
    public:
        static const std::size_t PAGE_SIZE = 4096;
        std::vector<uint8_t> data;
        int id;
        bool dirty;
        int pincount;
        Page(){
            id = -1;
            data.assign(PAGE_SIZE, 0);
            dirty = false;
            pincount = 0;
        }

    };



};


#endif //MYDATABASE_STORAGE_H
