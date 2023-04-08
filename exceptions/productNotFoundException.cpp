#include"productNotFoundException.h"

ProductNotFoundException::ProductNotFoundException(const std::string& msg){
    this->msg = msg;
}

const char* ProductNotFoundException::what() const noexcept {
    return msg.c_str();
}