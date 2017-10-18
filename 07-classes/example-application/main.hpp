#include <iostream>
#include <string>
#include <stdio.h>

class Student
{
    int studentID;
    float grades[10];

public:
    void setStudentID(int idIn)
    {
        studentID = idIn;
    }

    void setGrade(int i, float gradeIn)
    {
        grades[i] = gradeIn;
    }

    int getStudentID()
    {
        return studentID;
    }

    float getGrade(int i)
    {
        return grades[i];
    }

    float * getGrades()
    {
        return grades;
    }

    float getMinGrade()
    {
        sortGrades();
        return grades[0];
    }

    float getMaxGrade()
    {
        sortGrades();
        return grades[9];
    }

    float getAverageGrade()
    {
        float sum = 0.;
        for(int i = 0; i<10; i++)
            sum = sum + grades[i];
        return sum/10;
    }

    void sortGrades()
    {
        // sort ascending
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 9 - i; j++)
                {
                    if(grades[j] > grades[j + 1])
                    {
                        int temp;
                        temp=grades[j];
                        grades[j]=grades[j + 1];
                        grades[j + 1]=temp;
                    }
                }
        }
    }

};

class CourseEnrollment
{
public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];

    //etc...
};