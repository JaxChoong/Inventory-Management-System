// Item.h
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    std::string name;
    std::string category;
    std::string price;
    std::string quantity;

    Item(const std::string& name, const std::string& category, const std::string& price, const std::string& quantity)
        : name(name), category(category), price(price), quantity(quantity) {}
};
// Define the << operator overload for Item outside of the class
inline std::ostream& operator<<(std::ostream& os, const Item& item) {
    os << "Name: " << item.name 
       << ", Category: " << item.category 
       << ", Price: " << item.price 
       << ", Quantity: " << item.quantity;
    return os;
}
#endif
