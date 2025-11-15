#ifndef DOG_HPP
#define DOG_HPP

#include "Pet.hpp"

class Dog : public Pet {
private:
    double weight;

public:
    void setWeight(double w);
    double getWeight() const;

    std::string speak() const override;
};

#endif
