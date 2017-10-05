// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

#include "header.hpp"
#include <sstream>

int main()
{
    std::string year = "";
    int numeric_year = 0;
    std::cout<<"What year it is?\n";
    std::getline(std::cin, year);
    std::stringstream(year) >> numeric_year;
    // You can do anything with `int` variable `numeric_year` here (e.g. math operations).
    std::cout<<"Wow, "<<numeric_year<<"!\n";

    return 0;
}

/*

What year it is?
10000
Wow, 10000!

*/