// Virtual Functions
// h16.m.cpp

#include "Animal.h"

void foo(Animal a) {
    a.display();
}
void goo(Animal& a) {
    a.display();
}
/* first */
//int main() {
//    Animal a;
//    Horse h;
//
//    a.display();
//    foo(a);
//    goo(a);
//    h.display();
//    foo(h);
//    goo(h);
//}
/* second */
int main() {
    Animal* a;

    a = new Animal();
    a->display();
    foo(*a);
    goo(*a);
    delete a;
    a = new Horse();
    a->display();
    foo(*a);
    goo(*a);
    delete a;
}