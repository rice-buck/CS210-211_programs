#ifndef BIRD_HPP
#define BIRD_HPP

#include "Pet.hpp"
#include <string>

class Bird : public Pet {
private:
    std::string featherColor;

public:
    void setFeatherColor(const std::string& color);
    std::string getFeatherColor() const;

    std::string speak() const override;
};

#endif