#include "Pet.hpp"

Pet::Pet() : name("Unnamed") {}

void Pet::setName(const std::string& newName) {
    name = newName;
}

std::string Pet::getName() const {
    return name;
}

std::string Pet::speak() const {
    return "Pet sound!";
}
