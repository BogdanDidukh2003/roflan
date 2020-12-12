#include "Fish.h"
#include <string>
#include <vector>

class Aquarium {
private:
    float freeSpace;
    std::vector <Fish> vectorOfFishesInAquarium;

public:
    Aquarium(float aquariumSpace) {
        this->freeSpace = aquariumSpace;
    }

    int getFreeSpace();
    std::vector <Fish> getVectorOfFishesInAquarium();
    bool addFish(Fish fish);
    void bigest();
    std::vector<Fish> bubbleSortFromLargestToSmallestBySize(std::vector<Fish> array);
};