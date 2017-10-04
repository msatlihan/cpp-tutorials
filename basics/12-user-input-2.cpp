// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

// with `cin`, C++ sees the space as the end of the input.
// In order to overcome this, use: std::getline(std::cin, variable_name);
// `getline` will retrieve all the characters untill the new line or a \n is detected.


#include "header.hpp"
#include <string>

int main()
{
    std::string fullname = "";

    std::cout<<"Hi, what is full your name?\n";
    std::getline(std::cin, fullname);
    std::cout<<"Hello "<<fullname<<"!\n";
}
