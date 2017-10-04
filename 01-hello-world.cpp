// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

/* This is a comment block. */
// And this is a one line comment.

// `include` is a preprocessor directive, there are many others.
// Includes a given library, iostream in this case.
// Brackets indicate that look for the library in the directory where all the libraries are
// stored.
// If used double quotes (e.g. "iostream"), then it says look for the current directory, if 
// the name isn't there, then look in the directory where the standard libraries are stored.
#include <iostream>

int main()
{
    std::cout<<"Hello World!\n";
    return 0; // This is optional here.
}

// For some examples of style guides:
// https://github.com/Microsoft/AirSim/blob/master/docs/coding_guidelines.md
// https://google.github.io/styleguide/cppguide.html (more detailed). 