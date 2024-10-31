#include "Items.h"

class Items{
    public:
        std::vector<std::string> inventory;
        std::vector<std::string> header;
        void addInventory(std::string item){
            inventory.push_back(item);
        }
        void printInventory(){
            for(auto item : inventory){
                std::cout << item << std::endl;
            }
        }
        void addHeader(std::string column){
            header.push_back(column);
        }
        void printHeader(){
            for(auto column : header){
                std::cout << column << std::endl;
            }
        }
};