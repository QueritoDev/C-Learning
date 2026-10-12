#include <iostream>

int main(){
    
    float num1 = 0;
    float num2 = 0;
    float result = 0;
    char arith_operators = 'a';

    std::cout << "Enter the 1st number: ";
    std::cin >> num1;

    std::cout << "Enter the 2nd number: ";
    std::cin >> num2;

    std::cout << "Enter the aritmetic operator (+ - / or *): ";
    std::cin >> arith_operators;

    switch(arith_operators){
        case '+':
            result = num1 + num2;    
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;    
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;    
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;    
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "Please enter either (+ - * /)";
    }
        

    return 0;
}