#include <iostream>

// cout << (insertion operator);
// cin >> (extraction operator);
// getline (std::cin, variable);
// getline (std::cin >> std::ws, name) std::ws extracts and discards 
//                                     leading whitespace characters.

int main()
{ 
    
    std::string name;
    int age; 
    
    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);
    //std::cout << "What's your name?: ";
    //std::cin >> name;
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    
    return 0;
}