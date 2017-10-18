// Tutorials are coded by Musa Atlıhan with the help of Udacity C++ lessons.
// Credits https://www.udacity.com


#include "main.hpp"
using namespace std;

// C++ has a pointer called 'this'.

class Cats
{
    int age;

public:
    void setAge(int ageIn)
    {
        age = ageIn;
    }

    int getAge()
    {
        return age;
    }

    void printAge()
    {
        cout<<"Age of the cat is "<<age<<"\n";
    }

    void compareAges(Cats catIn)
    {
        if (this->getAge() > catIn.getAge())
        {
            cout<<"This cat is older\n";
        }
        else
        {
            cout<<"This cat is younger\n";
        }
    }
};

int main()
{
    Cats cat1;
    Cats cat2;
    Cats cat3;

    cat1.setAge(2);
    cat2.setAge(4);
    cat3.setAge(5);

    cat1.printAge();
    cat2.printAge();
    cat3.printAge();

    cat2.compareAges(cat1);
    cat2.compareAges(cat2);
}
