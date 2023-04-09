#include"inventory.h"
#include"productNotFoundException.h"
#include<iostream>

Inventory::Inventory(){}
Inventory::Inventory(std::vector<Product*> products){
    for(Product *prod: products){
        if(this->productsMap.find(prod->getProductId()) == this->productsMap.end()){
            this->productsMap[prod->getProductId()] = prod;
        } else {
            this->productsMap[prod->getProductId()]->addStock(prod->getQuantity());
        }
    }
}
std::string Inventory::addProduct(Product *prod){
    if(this->productsMap.find(prod->getProductId()) == this->productsMap.end()){
        this->productsMap[prod->getProductId()] = prod;
    } else {
        this->productsMap[prod->getProductId()]->addStock(prod->getQuantity());
    }
    return prod->getProductId();
}

void Inventory::displayProducts(){
    for(std::pair<std::string,Product*> productIdToProduct: this->productsMap){
        std::cout<<productIdToProduct.second->toString()<<std::endl;
    }
}

Product * Inventory::selectProduct(std::string productId){
    if(this->productsMap.find(productId) == this->productsMap.end()){
        throw ProductNotFoundException("Product not found");
    }
    return this->productsMap[productId];
}

std::vector<Product*> Inventory::searchByProductTitle(std::string productTitle){
    std::vector<Product*> products;

    for(std::pair<std::string , Product*> productIdToProduct : this->productsMap){
        if(productIdToProduct.second){
            Item *item = productIdToProduct.second->getItem();
            if( true == item->searchSubStr(productTitle)){
                products.push_back(productIdToProduct.second);
            }
        }
    }
    
    return products;
}