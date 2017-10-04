// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

// constant values does not change.

#include <iostream>

int main()
{
    const int some_constant = 100;
    std::cout<<"My constant is "<<some_constant<<"./n";
    some_constant = 200; // constants cannot change during computation, will cause error.
    std::cout<<"Did it change? "<<some_constant<<"./n";
}