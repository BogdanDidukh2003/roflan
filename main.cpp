#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Aquarium.h"
#include "Fish.h"

int main() {
    bool good = false, bad = false;
    Aquarium goodfish(12);
    Aquarium badfish(12);

    goodfish.addFish(Fish("Students", false, "Veres", 25, "Kurator",5));
    goodfish.addFish(Fish("Students", false, "Kuba", 25, "Prepod", 3));
    goodfish.addFish(Fish("Students", false, "Marchuk", 25, "Labki", 4));
    goodfish.addFish(Fish("Students", false, "Anya", 25, "Paralel", 2));
    badfish.addFish(Fish("Students", true, "Popov", 25, "Paralel", 5));
    badfish.addFish(Fish("Students", true, "Yana", 25, "Paralel", 2));
    badfish.addFish(Fish("Students", true, "Nerd", 25, "Paralel",3));
    badfish.addFish(Fish("Students", true, "Taras", 25, "Paralel", 4));

    goodfish.bigest();
    badfish.bigest();

    return 0;
}