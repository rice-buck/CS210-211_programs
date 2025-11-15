#ifndef PET_HPP
#define PET_HPP

#include <string>

class Pet {
protected:
    std::string name;

public:
    Pet();
    void setName(const std::string& n);
    std::string getName() const;

    virtual std::string speak() const;

    virtual ~Pet() {}
};

#endif
