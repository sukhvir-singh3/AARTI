#include <iostream>
#include "Header.h"
    void show(const Teacher & test) {
        test.printName();
    }
int main() {
    Teacher t(123, 456);
    show(t);
    return 0;
}