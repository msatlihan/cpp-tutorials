// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"

// type_of_variable array_name[size of dim.1][size of dim. 2]...[size of dim. n];

int main()
{
    int arrat_2d[2][3] = {0,1,2,3,4,5};
    for(int i=0; i<2;i++)
        for(int j=0;j<3;j++)
            std::cout<<"array_2d["<<i<<"]["<<j<<"] = " << arrat_2d[i][j]<<"\n";
    return 0;
}
