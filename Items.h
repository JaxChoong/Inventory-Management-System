// Items.h
#ifndef ITEMS_H
#define ITEMS_H

#include <vector>
#include <string>
#include <iostream>
#include "Item.h"  // Include the Item class

class Items {
public:
    std::vector<Item> inventory;
    std::vector<std::string> header;

    void addInventory(const Item& item) {
        inventory.push_back(item);
    }

    void addHeader(const std::string& column) {
        header.push_back(column);
    }

    void printHeader() const {
        for (const auto& column : header) {
            std::cout << column << " ";
        }
        std::cout << std::endl;
    }

    // Print each Item in the inventory vector
    void printInventory() const {
        for (const auto& item : inventory) {
            std::cout << item << std::endl;  // Uses the overloaded << operator for Item
        }
    }
};

#endif
