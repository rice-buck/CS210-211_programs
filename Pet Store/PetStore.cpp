#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "Pet.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::vector<std::shared_ptr<Pet>> pets;
    std::string input, name;

    while (true) {
        std::cout << "Enter 'c' for cat or 'd' for dog (or STOP to quit): ";
        std::cin >> input;

        if (input == "STOP" || input == "stop")
            break;

        std::shared_ptr<Pet> aPet;

        if (input == "c") {
            std::cout << "Enter the name of the cat: ";
            std::cin >> name;
            std::cout << "Enter the cat's coat color: ";
            std::string color;
            std::cin >> color;

            aPet = std::make_shared<Cat>();
            aPet->setName(name);
            dynamic_cast<Cat*>(aPet.get())->setCoatColor(color);

        } else if (input == "d") {
            std::cout << "Enter the name of the dog: ";
            std::cin >> name;
            std::cout << "Enter the dog's weight: ";
            double weight;
            std::cin >> weight;

            aPet = std::make_shared<Dog>();
            aPet->setName(name);
            dynamic_cast<Dog*>(aPet.get())->setWeight(weight);

        } else {
            std::cout << "Invalid choice.\n";
            continue;
        }

        pets.push_back(aPet);
    }

    // Print all pets
    for (auto& pet : pets) {
        if (Cat* c = dynamic_cast<Cat*>(pet.get())) {
            std::cout << pet->getName() << " is a "
                      << c->getCoatColor() << " cat.\n";

        } else if (Dog* d = dynamic_cast<Dog*>(pet.get())) {
            std::cout << pet->getName() << " is a dog that weighs "
                      << d->getWeight() << " pounds.\n";

        } else {
            std::cout << pet->getName() << " is an unknown pet type.\n";
        }
    }

    return 0;
}
