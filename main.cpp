#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Items.h"

int main(){
    std::ifstream file("stock.csv");
    std::string line;
    Items Items;

    // Read the first line as the header
    if (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string column;
        while (std::getline(ss, column, ',')) {
            Items.addHeader(column);
        }
        Items.addInventory(line);
    }

    while(std::getline(file, line)){
        Items.addInventory(line);
    }
    Items.printInventory();
    return 0;
}