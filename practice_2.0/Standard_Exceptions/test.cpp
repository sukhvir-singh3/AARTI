#include <iostream>

using namespace std;

class Animal {
public:
    void sleep() {
        cout << "The animal is sleeping" << endl;
    }
};

class Cat : public Animal {
public:
    void sleep() {
        cout << "The cat is sleeping" << endl;
    }

    void purr() {
        cout << "The cat is purring" << endl;
    }
};

class Tiger : public Cat {
public:
    void sleep() {
        cout << "The tiger is sleeping" << endl;
    }

    void roar() {
        cout << "The tiger is roaring" << endl;
    }
};

int main() {
    Animal a;
    Cat c;
    Tiger t;

    a.sleep();
    c.purr();
    t.roar();

    return 0;
}

