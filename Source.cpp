#include "Header.h"

int main()
{
    bool good = false, bad = false;
    Aquarium goodfish(100);
    Aquarium badfish(100);
    while (true)
    {
        std::string preferredFood, Name, Species;
        bool isAgressive;
        std::cout << "Enter preferred Food ";
        std::cin >> preferredFood;
        std::cout << "is Agressive ";
        std::cin >> isAgressive;
        std::cout << "Enter Name ";
        std::cin >> Name;
        std::cout << "Enter Species ";
        std::cin >> Species;
        Fish object(preferredFood, isAgressive, rand() % 10, Name, rand() % 10, Species, rand() % 10);
        if (isAgressive == true) {
            if (badfish.AddFish(object) == false) {
                bad == true;
                std::cout << "Bad fishes' aquarium is full";
            }
        }
        else
        {
            if (goodfish.AddFish(object) == false) {
                good == true;
                std::cout << "Good fishes' aquarium is full";
            }
        }
        if (bad == true && good == true) {
            break;
        }
    }

    return 0;
}