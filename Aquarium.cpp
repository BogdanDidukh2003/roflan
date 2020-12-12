#include "Aquarium.h"
#include <iostream>
#include <vector>
#include <string>

int Aquarium::getFreeSpace() {
    return freeSpace;
}
std::vector <Fish> Aquarium::getVectorOfFishesInAquarium() {
    return vectorOfFishesInAquarium;
}
bool Aquarium::addFish(Fish fish) {
    if (freeSpace - fish.getSize() >= 0) {
        vectorOfFishesInAquarium.push_back(fish);
        freeSpace -= fish.getSize();
        return true;
    }
    else {
        std::cout << "Aquarium is full!\n";
        return false;
    }
}

void Aquarium::bigest() {
    vectorOfFishesInAquarium = bubbleSortFromLargestToSmallestBySize(vectorOfFishesInAquarium);
    std::cout << "Rating:\n";
    for (auto& f : vectorOfFishesInAquarium) {
        std::cout << f.getName() << " " << f.getSize() << " " << std::endl;
    }
}

std::vector<Fish> Aquarium::bubbleSortFromLargestToSmallestBySize(std::vector<Fish> array)
{
    int len = array.size();
    for (int i = len; i > 0; i--)
    {
        for (int j = len - i; j > 0; j--)
        {
            if (array[j].getSize() > array[j - 1].getSize())
            {
                std::swap(array[j], array[j - 1]);
            }
        }
    }
    return array;
}