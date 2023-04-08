#ifndef USER_H
#define USER_H

#include<string>
#include"product.h"

class User{
    private:
    int id;
    std::string name;
    public:
    User(int id,std::string name);
    int getId();
    std::string getName();
    double buy(Product *product,int quantity);
};
#endif