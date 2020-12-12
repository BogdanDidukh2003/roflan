#pragma once
#include <string>
#include <vector>

class Fish {
private:
    std::string preferredFood;
    bool isAgressive;
    std::string name;
    int age;
    std::string species;
    float size;

public:
    std::string getFood();
    bool getAgressive();
    std::string getName();
    int getAge();
    std::string getSpecies();
    float getSize();

    Fish(std::string food, bool agressive, std::string name, int age, std::string species, float size);
    ~Fish();
};
