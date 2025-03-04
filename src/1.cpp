
// This is a simple C++ program that asks the user to input their name and then greets them with their name
#include <iostream>

int main() {
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}