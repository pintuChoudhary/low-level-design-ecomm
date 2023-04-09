#ifndef INVENTORY_H
#define INVENTORY_H


#include<map>
#include<vector>
#include<string>

#include"product.h"




class Inventory{
    private:
    std::map<std::string,Product*> productsMap;
    int money;
    public:
    Inventory();
    Inventory(std::vector<Product*> products);
    std::string addProduct(Product *product);

    void displayProducts();
    Product * selectProduct(std::string productId);
    std::vector<Product*> searchByProductTitle(std::string productTitle);
};

#endif