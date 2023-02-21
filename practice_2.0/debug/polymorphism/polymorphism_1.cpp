//this code have 3 mistakes, time limit 10 mins
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof" << endl;
    }
};

int main() {
    Cat myCat;
    Animal myAnimal = myCat;
    myAnimal.makeSound();
    
    Animal* animalPointer;
    animalPointer = new Animal();
    animalPointer->makeSound();
    
    delete animalPointer;
    return 0;
}

























































/*
1) In the main() function, we are creating an instance of Cat and assigning it to an object of type Animal. This results in object slicing, where only the base class part of the Cat object is copied into the myAnimal object. To fix this, we should use a pointer or reference to the Animal class instead of creating an object directly, like Animal* myAnimalPointer = new Cat();.

2) In the main() function, we are calling the makeSound() method on an object of the Animal class. Since makeSound() is a virtual method, we expect it to call the derived class method when called on an object of the derived class. However, since myAnimal is an object of the base Animal class, calling makeSound() on it will always call the base class method, regardless of the type of the object it refers to. To fix this, we should make myAnimal a pointer or reference to Animal class, and call the makeSound() method on it using the arrow operator ->, like Animal* myAnimalPointer = new Cat(); myAnimalPointer->makeSound();.

3) In the main() function, we allocate memory for an Animal object using the new operator, but we never free this memory using the delete operator. This results in a memory leak. To fix this, we should call delete animalPointer; to free the memory allocated for the animalPointer.



*****correct version*****

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meow" << endl;
    }
};

class Dog : public Animal {
public:
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
