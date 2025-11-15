#include "Cat.hpp"

void Cat::setCoatColor(const std::string& color) {
    coatColor = color;
}

std::string Cat::getCoatColor() const {
    return coatColor;
}

std::string Cat::speak() const {
    return "Meow!";
}
