
#include <iostream>
#include <string>

class Fish
{
public:
    virtual void swim() // defining as virtual is very important here!
    {
        std::cout<<"Fish is swimming!\n";
    }
};

class Shark : public Fish
{
public:
    void swim()
    {
        std::cout<<"Shark is swimming!\n";
    }
};

class Clownfish : public Fish
{
public:
    void swim()
    {
        std::cout<<"Clownfish is swimming!\n";
    }
};

int main()
{
    Fish *fish;
    Shark shark;
    Clownfish clownfish;

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
    shark.swim();
    clownfish.swim();
}