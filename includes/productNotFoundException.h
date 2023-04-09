#ifndef PRODUCT_NOT_FOUND_EXCEPTION
#define PRODUCT_NOT_FOUND_EXCEPTION
#include <exception>
#include <string>

class ProductNotFoundException: public std::exception {
    private:
    std::string msg;
    public:
    ProductNotFoundException(const std::string& msg);

    virtual const char* what() const noexcept;
};

#endif 