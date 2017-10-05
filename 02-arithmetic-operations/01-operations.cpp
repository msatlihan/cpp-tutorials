// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

// <cmath> library is useful here, it is included in `main.hpp`

#include "main.hpp"

// includes useful functions like std::pow(base, exponent);
// cmath also contains constants like `M_PI`

int main()
{
    float r;
    std::cout<<"What is the radius?\n";
    std::cin>>r;
    float area = M_PI * std::pow(r, 2);
    std::cout<<"Area is "<<area<<"\n";
    return 0;
}
