#include <iostream>
class Student {
    int ID=10;
public:
    //getter
    int getID() {
        return ID;
    }
    //setter
    void setID(int x) {
        ID = x;
    }
};
int main() {
    Student s;
    std::cout << s.getID() << std::endl;
    s.setID(15);
    std::cout << s.getID();
    return 0;
}