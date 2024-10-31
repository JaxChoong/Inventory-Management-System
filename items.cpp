#include "Items.h"

class Items{
    public:
        std::vector<std::string> inventory;
        void addInventory(std::string item, std::vector<std::string> &inventory){
            inventory.push_back(item);
        }
        void printInventory(std::vector<std::string> &inventory){
            for(auto item : inventory){
                std::cout << item << std::endl;
            }
        }
};