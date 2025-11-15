#include <iostream>
#include <vector>
#include <string>

#include "Pet.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Bird.hpp"
#include "Fish.hpp"

int main() {
    std::vector<Pet*> pets;
    std::string input;

    while (true) {
        std::cout << "Enter 'c' for cat \n'd' for dog \n'b' for bird\n 'f' for fish\n(or STOP): ";
        std::cin >> input;

        if (input == "STOP" || input == "stop") {
            break;
        }

        if (input == "c") {
            std::string name, color;
            std::cout << "Enter cat name: ";
            std::cin >> name;
            std::cout << "Enter coat color: ";
            std::cin >> color;

            Cat* c = new Cat();
            c->setName(name);
            c->setCoatColor(color);
            pets.push_back(c);

        } else if (input == "d") {
            std::string name;
            double weight;

            std::cout << "Enter dog name: ";
            std::cin >> name;
            std::cout << "Enter weight: ";
            std::cin >> weight;

            Dog* d = new Dog();
            d->setName(name);
            d->setWeight(weight);
            pets.push_back(d);

        } else if (input == "b") {
            std::string name;
            std::string color;

            std::cout << "Enter bird name: ";
            std::cin >> name;
            std::cout << "Enter feather color: ";
            std::cin >> color;

            Bird* b = new Bird();
            b->setName(name);
            b->setFeatherColor(color);
            pets.push_back(b);

        }else if (input == "f") {
            std::string name;
            std::string waterType;

            std::cout << "Enter fish name: ";
            std::cin >> name;
            std::cout << "Enter it's  water type: ";
            std::cin >> waterType;

            Fish* f = new Fish();
            f->setName(name);
            f->setWaterType(waterType);
            pets.push_back(f);

        }else {
            std::cout << "Invalid option.\n";
        }
    }

    std::cout << "\n--- Pet Summary ---\n";

    for (Pet* p : pets) {
        std::cout << p->getName() << " says " << p->speak() << ". ";

        if (Cat* c = dynamic_cast<Cat*>(p)) {
            std::cout << "It is a " << c->getCoatColor() << " cat.\n";
        }
        else if (Dog* d = dynamic_cast<Dog*>(p)) {
            std::cout << "It weighs " << d->getWeight() << " pounds.\n";
        }
        else if (Bird* b = dynamic_cast<Bird*>(p)) {
            std::cout << "It is a " << b->getFeatherColor() << " colored bird.\n";
        }
        else if (Fish* f = dynamic_cast<Fish*>(p)) {
            std::cout << "It is a " << f->getWaterType() << " water type fish.\n";
        }
        else {
            std::cout << "(Unknown pet type)\n";
        }
    }

    //cleanup
    for (Pet* p : pets) {
        delete p;
    }

    return 0;
}
