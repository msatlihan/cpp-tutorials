// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"
#include <cstdio>

/*
C++ array can be declared  as,

variable_type array_name [] = {variables to be stored in the array};

or as,

variable_type array_name[array size];

for to access the values in an array,

variable_type array_name[index number];
*/

int main()
{
    int user_input[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &user_input[i]);
    }

    std::cout<<"\nThe array\n";
    for(int i = 0; i < 5; i++)
    {
        std::cout << user_input[i] <<" ";
    }
    std::cout<<"\n";

    std::cout<<"\n\nThe array in reverse order\n";
    for(int i = 4; i >= 0; i--)
    {
        std::cout << user_input[i] <<" ";
    }
    std::cout<<"\n";

    return 0;
}
