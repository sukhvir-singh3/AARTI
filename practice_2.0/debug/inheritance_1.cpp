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

