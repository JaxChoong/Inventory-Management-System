#include "Items.h"

class Items{
    public:
        std::vector<std::string> inventory;
        void addInventory(std::string item){
            inventory.push_back(item);
        }
        void printInventory(){
            for(auto item : inventory){
                std::cout << item << std::endl;
            }
        }
};