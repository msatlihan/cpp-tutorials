// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

// sizeof() is a compile time operator which gives the size a variable allocated in memory.
// For example sizeof(any variable type) determines how many bytes each variable type uses.

#include <iostream>

int main()
{
    int var1 = 42;
    std::cout<<"Size of int is "<<sizeof(int)<<
    " Size of a int variable (42) is "<<sizeof(var1)<<std::endl;
    return 0;
}

// newline vs endline:
// `endl` is similar to "\n", however `endl` calls flush() on the stream.
// `endl` is equivalent to cout<<x<<"\n"; cout.flush()