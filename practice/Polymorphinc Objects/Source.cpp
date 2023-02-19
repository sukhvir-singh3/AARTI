#include <iostream>
#include "Header.h"
using namespace std;
void showId(const Students& s) {
    s.printName();
}
int main() {
    Students* s = nullptr;// ploymorphic object
    s = new Students(15);
    showId(*s); 
    delete s;

    cout << endl;

    s = new Teacher(50);
    showId(*s);
    delete s;
    return 0;
}