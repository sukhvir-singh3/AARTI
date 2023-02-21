//This code includes 3 basic mistakes, time limit 10mins
#include <iostream>
using namespace std;

class Vehicle {
   private:
      void drive() {
         cout << "I can drive!" << endl;
      }
};

class Car: public Vehicle {
   public:
      void honk() {
         cout << "I can honk!" << endl;
      }
};

class SportsCar{
   public:
      void race() {
         cout << "I can race!" << endl;
      }
};

int main() {
   SportsCar mySportsCar;

   mySportsCar.drive();
   mySportsCar.honk();
   mySportsCar.race;

   return 0;
}



























































/*
1) only be accessed by member functions of the Vehicle class and not by any derived classes. Since Car is derived from Vehicle, it will not be able to access the drive() method. To fix this, we should mark drive() as protected instead of private.

2) In the main() function, we are trying to call the drive() method on an object of the SportsCar class, but drive() is not a member of the SportsCar class. It is a member of the Vehicle class. To fix this, we should create an object of the Car class, which is derived from Vehicle, and call drive() on it.

3) In the main() function, we are trying to call the race() method of the SportsCar class, but we have forgotten to put parentheses after the method name. To fix this, we should change mySportsCar.race; to mySportsCar.race();
 */






















