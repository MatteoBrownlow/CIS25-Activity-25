#include <iostream>
#include "customer.hpp"
#include "address.hpp"
using namespace std;

int main(){
    Customer userCustomer;
    cout << "Enter your street : " << endl;
    cin >> userCustomer.customerAddress.street;
    cout << "Enter your city: " << endl;
    cin >> userCustomer.customerAddress.city;
    cout << "Enter your zip code: " << endl;
    cin >> userCustomer.customerAddress.zipCode;
    cout << "Enter your name: " << endl;
    cin >> userCustomer.name;
    cout << "Enter your email: " << endl;
    cin >> userCustomer.email;
    cout << "Enter your ID number: " << endl;
    cin >> userCustomer.ID;
    return 0;
}
