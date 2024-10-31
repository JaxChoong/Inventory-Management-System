#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Items.h"

int main(){
    std::ifstream file("stock.csv");
    std::string line;
    Items Items;
    while(std::getline(file, line)){
        Items.addInventory(line);
    }
    Items.printInventory();
    return 0;
}