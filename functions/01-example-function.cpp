// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

void printMessage(); //note, this is placed BEFORE main()

int main()
{
    printMessage();
    return 0;
}

//note, the definition is conventionally placed after main
void printMessage()
{
    std::cout<<"Hello user!\n";
}