#include <iostream>

int main()
{
    
    // integer
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'a';
    char initial = 'B';
    char dollarSign = '$';

    // boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of char)
    std::string name = "Querito";
    std::string day = "Saturday";
    std::string food = "Pizza!";

    std::cout << "Hello" << name << '\n';
    std::cout << "It's" << day << '\n';
    std::cout << "My favorite food is: " <<food << '\n';
    
    
    return 0;
}