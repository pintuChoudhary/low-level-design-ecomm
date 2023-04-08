#ifndef USER_H
#define USER_H

#include<string>

class User{
    private:
    int id;
    std::string name;
    public:
    User(int id,std::string name);
    int getId();
    std::string getName();
};
#endif