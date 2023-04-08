#include"user.h"

User::User(int id,std::string name){
    this->id = id;
    this->name = name;
}
int User::getId(){
    return id;
}
std::string User::getName(){
    return name;
}

double User::buy(Product *product,int quantity){
    return product->buy(quantity);
}