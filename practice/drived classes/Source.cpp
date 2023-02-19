#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include "Header.h"

int main() {
    Student s1("Sukhvir", 21, 3);
    s1.print();
    std::cout << std::endl;
    Student s2("Aarti", 1, 3);
    s2.print();
    return 0;
}