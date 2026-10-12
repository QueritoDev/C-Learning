#include <iostream>
#include <cmath>

// cout << (insertion operator);
// cin >> (extraction operator);
// getline (std::cin, variable);
// getline (std::cin >> std::ws, name) std::ws extracts and discards 
//                                     leading whitespace characters.

//Hypotenuse calculator program

int main()
{ 
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;
    
    std::cout << "Hypotenuse calculator program" << '\n';
    
    std::cout << "Enter the a side: " << '\n';
    std::cin >> a;
    
    std::cout << "Enter the b side: " << '\n';
    std::cin >> b;

    a = pow (a,2);
    b = pow (b,2);
    c = sqrt(a+b);
    
    std::cout << "Hypotenuse: " << c << '\n';
    return 0;
}