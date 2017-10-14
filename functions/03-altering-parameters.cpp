// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

// No altering in this case!

void increment(int input);

int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}

void increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";    
}