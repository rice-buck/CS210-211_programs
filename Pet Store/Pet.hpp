#ifndef PET_HPP
#define PET_HPP

#include <string>

class Pet {
protected:
    std::string name;

public:
    Pet();
    void setName(const std::string& newName);
    std::string getName() const;

    // virtual version of speak()
    virtual std::string speak() const;
    
    virtual ~Pet() {}
};

#endif
