// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

// If we define a variable, int a = 42;
// The value 42 is stored in the location reserved for the variable `a`.
// The location can be found using a pointer: std::cout<<&a<<"\n";

int main()
{
    int a = 42;
    std::cout<<"The value of variable a is "<<a<<"\n"
    <<"The address of a is at"<<&a<<"\n";   
    return 0;
}
