#include"notSufficientQuantityException.h"

NotSufficientQuantityException::NotSufficientQuantityException(const std::string & msg){
    this->msg = msg;
}

const char* NotSufficientQuantityException::what() const noexcept {
    return msg.c_str();
}