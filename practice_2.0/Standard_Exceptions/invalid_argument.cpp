#include <iostream>
#include <stdexcept>
using namespace std;

// Function that takes a string and returns its length
int getLengthOfString(const string &str) {
    if (str.empty()) {
        throw invalid_argument("String cannot be empty!");
    }
    return str.length();
}

int main() {
    string str1 = "Hello, world!";
    string str2 = "";

    try {
        int length1 = getLengthOfString(str1);
        cout << "Length of string 1 is " << length1 << endl;
        int length2 = getLengthOfString(str2);
        cout << "Length of string 2 is " << length2 << endl;
    }
    catch (invalid_argument &e) {
        cout << "Invalid argument error: " << e.what() << endl;
    }

    return 0;
}

