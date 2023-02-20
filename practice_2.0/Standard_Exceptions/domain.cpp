#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

// Function that calculates the square root of a positive number
double calculateSqrt(double x) {
    if (x < 0.0) {
        throw domain_error("Cannot take square root of a negative number!");
    }
    return sqrt(x);
}

int main() {
    double x1 = 16.0;
    double x2 = -4.0;

    try {
        double y1 = calculateSqrt(x1);
        cout << "Square root of " << x1 << " is " << y1 << endl;
        double y2 = calculateSqrt(x2);
        cout << "Square root of " << x2 << " is " << y2 << endl;
    }
    catch (domain_error &e) {
        cout << "Domain error: " << e.what() << endl;
    }

    return 0;
}

