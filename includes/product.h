#ifndef PRODUCT_H
#define PRODUCT_H

#include"item.h"


class Product{
    private:
    std::string productId;
    Item *item;
    double price;
    int quantity;

    public:
    Product(std::string productId,Item *item,double price,int quantity);
    std::string getProductId();
    Item *getItem();
    double getPrice();
    int getQuantity();
    int addStock(int quantity);

    double buy(int quantity);

    std::string toString();
};

#endif