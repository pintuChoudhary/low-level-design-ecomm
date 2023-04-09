#include"item.h"

#include<iostream>
#include<sstream>

Item::Item(int id,std::string title,std::string desc): id(id), title( title), desc(desc){}

std::string Item::getTitle(){
    return title;
}

bool Item::searchSubStr(std::string &pat){
    int len = pat.length();
    for(int index = 0; index < (int)desc.length() - len + 1; index++){
        std::string subpat = desc.substr(index,len);
        //std::cout<<" test == "<<desc.substr(index)<<std::endl;
        if(subpat == pat){
            return true;
        }
    }
    return false;
}

std::string Item::toString(){
    std::stringstream ss;
    ss<<"Item Id = "<<id<<"\n";
    ss<<"Title = "<<title<<"\n";
    ss<<"Desc = "<<desc<<std::endl;
    return ss.str();
}