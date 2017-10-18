// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"
using namespace std;

// Just like a constructor, a destructor is called automatically.

/*
Defining a destructor:

classname::~classname()
{
     //tasks to be completed before going out of scope
}
*/

class Cats
{
    string name;
    string breed;
    int age;

public:
    Cats(); // declaring the constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
    ~Cats();
};

// defining the constructor
Cats::Cats()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown";
    age = 99;
}

void Cats::setName(string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}

string Cats::getName()
{
    return name;
}

string Cats::getBreed()
{
    return breed;
}

int Cats::getAge()
{
    return age;
}

void Cats::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}

Cats::~Cats()
{
    cout<<"Deleting the cats.\n";
}

int main()
{
    Cats cats[3];
    cats[0].setName("cat 1");
    cats[1].setName("cat 2");
    cats[2].setName("cat 3");
    cats[0].printInfo();
    cats[1].printInfo();
    cats[2].printInfo();
    cout<<"\nEnd of main function.\n";
    return 0;
}
