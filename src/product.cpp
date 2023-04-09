#include"product.h"
#include"notSufficientQuantityException.h"

#include<sstream>

Product::Product(std::string productId,Item *item,double price,int quantity){
    this->productId = productId;
    this->item = item;
    this->price = price;
    this->quantity = quantity;
}
std::string Product::getProductId(){
    return productId;
}

Item * Product::getItem(){
    return item;
}

double Product::getPrice(){
    return price;
}

double Product::buy(int quantity){
    if(quantity > this->quantity){
        throw NotSufficientQuantityException("Not suffient Stock Availabe"); 
    }
    double amount = quantity * this->price;
    this->quantity -= quantity;
    return amount;
}

int Product::addStock(int quantity){
    this->quantity += quantity;
    return this->quantity;
}

int Product::getQuantity(){
    return this->quantity;
}

std::string Product::toString(){
    std::stringstream ss;
    ss<<"Id = "<<productId<<"\n";
    ss<<"Item: \n";
    ss<<item->toString();
    ss<<"Price Rs."<<price<<"\n";
    ss<<"Quantity = "<<quantity<<std::endl;
    return ss.str();
}