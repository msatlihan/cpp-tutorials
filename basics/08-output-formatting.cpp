// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

// No libraries are needed for formatting.
// Examples:
// \n = newline, \t = tab.

// Or can be used standard library `iomanip`.
// Output can be formatted using this library.
// For example, std::cout<<"Ints"<<std::setw(10)<<"Floats"<<std:setw(10)<<"Doubles";
// we can set a width of 10 spaces with setw().
// After the word int there will be more space, since length of int smaller then Floats and Doubles.

#include <iostream>

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    std::cout<<"Ints\t"<<"Floats\t"<<"Doubles\n"
    <<a<<"\t"<<b<<"\t"<<c<<"\n"
    <<aa<<"\t"<<bb<<"\t"<<cc<<"\n"
    <<aaa<<"\t"<<bbb<<"\t"<<ccc<<"\n";
    
    return 0;
}