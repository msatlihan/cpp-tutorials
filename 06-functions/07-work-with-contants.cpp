// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

// if the passing variable should not be changed pass it as constant!

int doubleInput(const int input);


int main()
{
    std::cout<<doubleInput(5)<<"\n";
    return 0;
}

int doubleInput(const int input)
{
    //input++ // If you try to change the constant variable we will get error message
    // when compiling.
    int h = input *2;
    return h;
}