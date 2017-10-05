// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

int main()
{
    int i = 0;

    while (i < 5)
    {
        std::cout<<i<<"\n";
        i++;
    }

    i = 0;
    while (i < 5)
    {
        std::cout<<i<<"\n";
        ++i;
    }
    
    return 0;
}
