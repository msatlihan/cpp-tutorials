// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

#include "main.hpp"

const int CLASS_SIZE = 6;
FILE *stream = fopen("data.txt", "r");

int main()
{
    Student studentsInClass[6];
    CourseEnrollment course1;

    static int studentNumber = 1000;
    float grade;
    int userInput;

    for(int i = 0; i < CLASS_SIZE; i++)
    {
        studentsInClass[i].setStudentID(studentNumber);
        studentNumber++;
    }

    //std::cout<<studentsInClass[2].getStudentID()<<"\n";

    for(int i = 0; i < CLASS_SIZE; i++)
    {
      for(int j = 0; j < 10 ; j++)
        {
            //scanf("%d", &grade);
            //studentsInClass[i].setGrade(j,grade);
            //std::cout<<grade<<" "<<j<<"\n";
            fscanf(stream, "%f", &grade);
            studentsInClass[i].setGrade(j, grade);
            //std::cout<<grade<<" ";
        }
    }

    //for(int i = 0; i<10; i++)
    //    std::cout<<studentsInClass[0].getGrade(i)<<" ";
    //std::cout<<studentsInClass[0].getAverageGrade()<<"\n";
    std::cout<<studentsInClass[0].getMinGrade()<<"\n";
    std::cout<<studentsInClass[0].getMaxGrade()<<"\n";
    //for(int i = 0; i<10; i++)
    //    std::cout<<studentsInClass[0].getGrade(i)<<" ";

    //etc...

    return 0;
}