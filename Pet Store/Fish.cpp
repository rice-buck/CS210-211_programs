#include "Fish.hpp"

void Fish::setWaterType(const std::string& w) {
    waterType = w;
}

std::string Fish::getWaterType() const {
    return waterType;
}

std::string Fish::speak() const {
    return "Blub Blub!";
}
