//this code have 3 mistakes, time limit 10 mins
#include <iostream>
using namespace std;

class Animal {
public:
    ~Animal(){}
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    ~Cat(){}
    void makeSound() {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    ~Dog(){}
    void makeSound() {
        cout << "Woof" << endl;
    }
};

int main() {
    Cat myCat;
    Animal myAnimal = myCat;
    myAnimal.makeSound();
    
    Animal* animalPointer = new Animal();
    animalPointer->makeSound();
    
    delete animalPointer;
    return 0;
}

























































/*
1) In the main() function, we are creating an instance of Cat and assigning it to an object of type Animal. This results in object slicing, where only the base class part of the Cat object is copied into the myAnimal object. To fix this, we should use a pointer or reference to the Animal class instead of creating an object directly, like Animal* myAnimalPointer = new Cat();.

2) needed a virual ~Animal(){}

3) In the main() function, we allocate memory for an Animal object using the new operator, but we never free this memory using the delete operator. This results in a memory leak. To fix this, we should call delete animalPointer; to free the memory allocated for the animalPointer.



*****correct version*****

#include <iostream>
using namespace std;

class Animal {
public:
    virual ~Animal(){}
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    ~Cat(){}
    void makeSound() {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    ~Dog(){}
    void makeSound() {
        cout << "Woof" << endl;
    }
};

int main() {
    Animal* myAnimalPointer = new Cat();
    myAnimalPointer->makeSound();
    
    Animal* animalPointer = new Animal();
    animalPointer->makeSound();
    
    delete myAnimalPointer;
    delete animalPointer;
    
    return 0;
}

 */
