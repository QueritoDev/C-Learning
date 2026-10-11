#include <iostream>
    
    // Namespace = provides a solution for preventing name conflicts 
    //             in large projects. Each enttity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{ 
    // using namespace std;
    // using std::cout;
    using namespace first;
    int x = 0; 

    std::cout << x;
    std::cout << first::x;
    std::cout << second::x;
    return 0;
}