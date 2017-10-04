// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

/*
1) Include <fstream> library,

2) Create a stream for input, output or both,

* ofstream myfile; used for writing a file.
* ifstream myfile; used for reading a file.
* fstream myfile; used for both reading and writing a file.

3) Open the file: myfile.open("filename");

4) Read or write the file.

5) Close the file: myfile.close();

*/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string line;
    // Create an output stream to write to file.
    // Append the new lines to the end of the file.
    std::ofstream myfile_i("input.txt", std::ios::app);
    if (myfile_i.is_open())
    {
        myfile_i << "\nI am adding a new line.\n";
        myfile_i << "I am adding another line.\n";
        myfile_i.close();
    }
    else std::cout << "Unable to open for writing.";

    std::ifstream myfile_o("input.txt");
    // Output lines
    if (myfile_o.is_open())
    {
        while (std::getline(myfile_o, line))
        {
            std::cout << line << '\n';
        }
        myfile_o.close();
    }
    else std::cout << "Unable to open for reading";

    return 0;
}