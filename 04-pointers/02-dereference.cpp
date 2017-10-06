// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

/*
If we want to access a pointer's value stored in it's address, this process is
called DEREFERENCING. Dereferencing can be done by adding * before the variable name.
*/

int main()
{
    int a = 42;
    float b = 42.0;
    int * pointer_to_a = &a;
    float * pointer_to_b = &b;
    float ** pointer_pointer_to_b = &pointer_to_b;
    std::string my_name;
    std::string * pointer_to_my_name = &my_name;
    
    *pointer_to_my_name = "Musa";

    std::cout<<"pointer_to_a stores "<<pointer_to_a<<"\n";
    std::cout<<"pointer_to_a points to "<<* pointer_to_a<<"\n";
    std::cout<<"pointer_to_b stores "<<pointer_to_b<<"\n";
    std::cout<<"pointer_to_b points to "<<* pointer_to_b<<"\n";
    std::cout<<"pointer_pointer_to_b stores "<<pointer_pointer_to_b<<"\n";
    std::cout<<"pointer_pointer_to_b points to "<<** pointer_pointer_to_b<<"\n";
    std::cout<<"My name is "<<my_name<<"\n";
    return 0;
}
