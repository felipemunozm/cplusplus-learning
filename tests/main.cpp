#include <iostream>
#include <cstdint>
#include "add/add.hpp"
#include "minus/minus.hpp"


int main() {
    int n1 = 10, n2 = 9;
    std::cout << "ejemplo suma\n";
    std::cout << "2 + 8 = " << add::add(2,8) << std::endl;
    std::cout << "ejemplo resta\n";
    std::cout << "10 - 9 = " << myminus(&n1,n2) << std::endl;
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    char text[6];
    std::string t2 = "Hello bunch of MFK";
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); 

    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin >> std::ws, age);

    std::cout << "Your name is " << name << " and your age is " << age << '\n';

    int a = 1;
    std::cout << "Variable a has value: " << a << "\n";
    std::cout << "Address of variable a has value: " << &a << "\n";
    std::cout << "Value of the object inside the address is: " << *(&a) << "\n";
    int* b = &a;
    std::cout << "b: " << b << "\n";
    std::cout << "*b: " << *b << "\n";
    std::cout << "&b: " << &b << "\n";

    return 0;
}