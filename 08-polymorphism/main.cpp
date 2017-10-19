
#include <iostream>
#include <string>

class Fish
{
public:
    virtual void swim() // defining as virtual is very important here!
    {
        std::cout<<"Fish is swimming!\n";
    }
    //virtual void eat() = 0; // this is a pure virtual function, if i declare this
    // i won't be able to create instance from Fish class (like abstract classes in java)
    // and i have to add eat functions for each inhereted classes.
};

class Shark : public Fish
{
public:
    void swim()
    {
        std::cout<<"Shark is swimming!\n";
    }
    //void eat()
    //{
    //    std::cout<<"Eating meat!\n";
    //}
};

class Clownfish : public Fish
{
public:
    void swim()
    {
        std::cout<<"Clownfish is swimming!\n";
    }
    //void eat()
    //{
    //    std::cout<<"Eating kelp!\n";
    //}
};

int main()
{
    Fish *fish;
    Shark shark;
    Clownfish clownfish;

    Shark *shark2 = new Shark;

    std::string typeOfFish = "shark";

    if (typeOfFish == "shark")
    {
        fish = new Shark();
    }
    else
    {
        fish = new Fish();
    }

    fish->swim();
    shark2->swim();
    shark.swim();
    clownfish.swim();

    delete fish; //every 'new' must have a delete
    delete shark2; //every 'new' must have a delete
}

// Also there is pure virtual functions, these are like abstract
// classes in java, a link:
// https://stackoverflow.com/questions/2652198/difference-between-a-virtual-function-and-a-pure-virtual-function