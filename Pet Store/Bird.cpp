#include "Bird.hpp"

void Bird::setFeatherColor(const std::string& c){
    featherColor = c;
}

std::string Bird::getFeatherColor() const {
    return featherColor;
}

std::string Bird::speak() const {
    return "Chirp!";
}