#ifndef CAT_HPP
#define CAT_HPP

#include "Pet.hpp"
#include <string>

class Cat : public Pet {
private:
    std::string coatColor;

public:
    void setCoatColor(const std::string& c);
    std::string getCoatColor() const;

    std::string speak() const override;
};

#endif
