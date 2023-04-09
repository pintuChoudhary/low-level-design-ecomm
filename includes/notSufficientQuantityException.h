#ifndef NOT_SUFFICIENT_QUANTITY_EXCEPTION
#define NOT_SUFFICIENT_QUANTITY_EXCEPTION

#include<exception>
#include<string>

class NotSufficientQuantityException: public std::exception{
    private:
    std::string msg;
    public:
    NotSufficientQuantityException(const std::string& msg);

    virtual const char* what() const noexcept;
};

#endif