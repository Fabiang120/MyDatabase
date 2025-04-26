//
// Created by Owner on 4/25/2025.
//

#include "storage.h"

storage::Page::Page(){
    id = -1;
    data.assign(PAGE_SIZE, 0);
    dirty = false;
    pincount = 0;
}

void storage::Page::reset() {
    this->id = -1;
    this->dirty = false;
    this->pincount = 0;
    std::fill(data.begin(), data.end(), 0);
}

int storage::Page::getId() const {
    return this->id;
}

void storage::Page::setId(int id2) {
    this->id = id2;
}
bool storage::Page::getDirty() const{
    return this->dirty;
}

void storage::Page::setDirty(int dirty2) {
    this->dirty = dirty2;
}
int storage::Page::getPinCount() const {
    return this->pincount;
}

void storage::Page::setPinCount(int pincount2) {
    this->pincount = pincount2;
}

