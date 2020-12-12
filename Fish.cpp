#include "Fish.h"
#include <iostream>
#include <vector>
#include <string>

Fish::Fish(std::string food, bool agressive, std::string name, int age, std::string species, float size) {

    this->preferredFood = food;
    this->isAgressive = agressive;
    this->name = name;
    this->age = age;
    this->species = species;
    this->size = size;
}
Fish::~Fish() {}

std::string Fish::getFood() {
    return preferredFood;
}

bool Fish::getAgressive() {
    return isAgressive;
}

std::string Fish::getName() {
    return name;
}

int Fish::getAge() {
    return age;
}

std::string Fish::getSpecies() {
    return species;
}

float Fish::getSize() {
    return size;
}
