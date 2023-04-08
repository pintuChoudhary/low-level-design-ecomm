#ifndef ITEM_H
#define ITEM_H

#include<string>

class Item{
    private:
    int id;
    std::string title;
    std::string desc;
    
    

    public:
    Item(int id,std::string title,std::string desc);
    bool searchSubStr(std::string &pat);
    
    std::string getTitle();
    std::string toString();
};

#endif