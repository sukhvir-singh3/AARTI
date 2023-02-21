//This code have 3 mistakes, time limit 15 mins 
#include <iostream>

class Animal {
protected:
    std::string m_name;
public:
    Animal(std::string name) : m_name(name) {}

    virtual void makeSound() {
        std::cout << "An animal makes a sound." << std::endl;
    }

};

class Cat : public Animal {
public:
    Cat(std::string name) {
        m_name = name;
    }

    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animal = new Cat("Fluffy");
    Cat* cat = static_cast<Cat*>(animal);
    cat->makeSound();
    return 0;
}































































/*
1) The Cat constructor now calls the Animal constructor to correctly initialize the m_name variable.

2) We use dynamic casting to cast the Animal pointer to a Cat pointer, which will give us a valid cat pointer if the Animal object is actually a Cat. We also check if the cast was successful before calling the makeSound method.

3) We have added a delete statement to properly free the memory allocated for the animal object.


*********correct version**********

#include <iostream>

class Animal {
public:
    Animal(std::string name) : m_name(name) {}

    virtual void makeSound() {
        std::cout << "An animal makes a sound." << std::endl;
    }

protected:
    std::string m_name;
};

class Cat : public Animal {
public:
    Cat(std::string name) : Animal(name) {}

    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animal = new Cat("Fluffy");
    Cat* cat = dynamic_cast<Cat*>(animal);
    if (cat != nullptr) {
        cat->makeSound();
    }
    delete animal;
    return 0;
}

*/
