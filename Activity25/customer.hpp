#ifndef customer_hpp
#define customer_hpp

#include <iostream>

struct Address{
    std::string street;
    std::string city;
    int zipCode;
};
struct Customer{
    Address customerAddress;
    std::string name;
    std::string email;
    int ID;
    
};

#endif
