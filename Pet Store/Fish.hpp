#ifndef FISH_HPP
#define FISH_HPP

#include "Pet.hpp"
#include <string>

class Fish : public Pet {
private:
    std::string waterType;

public:
    void setWaterType(const std::string& waterType);
    std::string getWaterType() const;

    std::string speak() const override;
};

#endif