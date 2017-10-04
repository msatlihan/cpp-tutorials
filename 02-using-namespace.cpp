// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

// Use namespace in order to get rid of writing `std` multiple times.
#include <iostream>

using namespace std; // Tells the compiler we assume using the standard library.

int main()
{
    cout << "Writing std:: is pain, ";
    cout << "Use namespace for it!\n";
    return 0; // This is optional here.
}

// Be careful! If the commands are not explicitly defined, it is possible when you
// add your code to a larger project, the code might referens a command from a
// different library.