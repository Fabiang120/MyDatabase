//
// Created by Owner on 4/25/2025.
//

#ifndef MYDATABASE_STORAGE_H
#define MYDATABASE_STORAGE_H
#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

class storage {
public:
    class Page{
    public:
        static const std::size_t PAGE_SIZE = 4096;
        Page();
        ~Page() = default;
        void reset();
        int getId() const;
        void setId(int id2);
        bool getDirty() const;
        void setDirty(int dirty2);
        int getPinCount() const;
        void setPinCount(int pincount2);
    private:
        std::vector<uint8_t> data;
        int id;
        bool dirty;
        int pincount;
    };



};


#endif //MYDATABASE_STORAGE_H
