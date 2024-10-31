#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::ifstream file("stock.csv");
    std::string line;
    std::vector<std::string> inventory;
    while(std::getline(file, line)){
        inventory.push_back(line);
    }
    for(auto item : inventory){
        std::cout << item << std::endl;
    }
    return 0;
}