#include "Dog.hpp"

void Dog::setWeight(double w) {
    weight = w;
}

double Dog::getWeight() const {
    return weight;
}

std::string Dog::speak() const {
    return "Woof!";
}
