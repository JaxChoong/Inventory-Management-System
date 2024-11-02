#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Items.h"

int main() {
    std::ifstream file("stock.csv");
    std::string line;
    Items items;

    // Read the first line as the header
    if (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string column;
        while (std::getline(ss, column, ',')) {
            items.addHeader(column);
        }
    }

    // Read subsequent lines as inventory data
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string column;
        std::vector<std::string> data;
        while (std::getline(ss, column, ',')) {
            data.push_back(column);
        }
        if (data.size() >= 4) {
            Item item(data[0], data[1], data[2], data[3]);
            items.addInventory(item);
        }
    }

    items.printHeader();
    items.printInventory();
    return 0;
}
