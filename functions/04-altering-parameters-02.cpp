// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

// Option 1: Alter by returning the variable.

int increment(int input);

int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    a = increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
int increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
    return input;
}