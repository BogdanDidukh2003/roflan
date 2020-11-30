#pragma once
#include <iostream>
#include <string>
#include <vector>


class Fish {
private:
    std::string preferredFood;
    bool isAgressive;
    float NeededSpace;
    std::string Name;
    int Age;
    std::string Species;
    float Size;

public:
    std::string getFood();
    bool getAgressive();
    float getSpace();
    std::string getName();
    int getAge();
    std::string getSpecies();
    float getSize();

    Fish(std::string Food, bool Agressive, float Space, std::string Name, int Age, std::string Species, float Size) {

        this->preferredFood = Food;
        this->isAgressive = Agressive;
        this->Name = Name;
        this->Age = Age;
        this->Species = Species;
        this->Size = Size;
    }

    ~Fish() {}

};
class Aquarium {
private:
    float totalVolume;
    float freeSpace;
    std::vector <Fish> fish;
public:

    bool AddFish(Fish fish) {
        if (totalVolume - fish.getSpace() >= 0)
        {
            this->fish.push_back(fish);
            totalVolume -= fish.getSpace();
            return true;
        }
        else
        {
            return false;
        }

    }
    std::vector <Fish> BubbleSort(std::vector <Fish> array)
    {
        int len = array.size();
        for (int i = 1; i < len; i++)
        {
            for (int j = 0; j < len - i; j++)
            {
                if (array[j].getSize() > array[j + 1].getSize())
                {
                    std::swap(array[j], array[j + 1]);
                }
            }
        }

        return array;
    }

    Aquarium(float Volume) {
        this->freeSpace = Volume;


    }

};
std::string Fish::getFood() {
    return preferredFood;
}
bool Fish::getAgressive() {
    return isAgressive;
}
float Fish::getSpace() {
    return NeededSpace;
}
std::string Fish::getName() {
    return Name;
}
int Fish::getAge() {
    return Age;
}
std::string Fish::getSpecies() {
    return Species;
}
float Fish::getSize() {
    return Size;
}