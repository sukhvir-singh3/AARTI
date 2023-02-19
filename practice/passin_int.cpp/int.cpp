#include <iostream>
using namespace std;

int main() {
   for (int i = 0; i < 10; i++)
   {
    cout << i;
    if(i == 2) return "hello";
   }
   cout << "\n done";
   
    return 0;
}