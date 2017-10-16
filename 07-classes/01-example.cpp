// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com

#include "main.hpp"

// It is conventional to put classes in a header file. 
// For this example we are going to put them in the main file 
// so we can see both the main program and the class at the same time.

class Student
{
    std::string name;
    int id;
    int gradDate;

    public:
        void setName(std::string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        std::string getName();
        int getId();
        int getGradDate();
};

void Student::setName(std::string nameIn)
{
    name = nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradDate(int dateIn)
{
    gradDate = dateIn;
}

std::string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getGradDate()
{
    return gradDate;
}


int main()
{
    Student student1;
    student1.setName("Jack Daniels");
    student1.setId(1);
    student1.setGradDate(2020);
    std::cout<<"Name: "<<student1.getName()<<"\nId: "
    <<student1.getId()<<"\ngrad date: "<<student1.getGradDate()<<"\n";
    return 0;
}