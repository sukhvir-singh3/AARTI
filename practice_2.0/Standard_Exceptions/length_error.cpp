#include <iostream>
#include <stdexcept>
using namespace std;

// Function that takes a string of up to 10 characters
void processString(string str) {
    if (str.length() > 10) {
        throw length_error("String is too long!");
    }
    // Do something with the string
    cout << "Processed string: " << str << endl;
}

int main() {
    string s1 = "Hello, world!";
    string s2 = "Short str";

    try {
        processString(s1);
        processString(s2);
    }
    catch (length_error &e) {
        cout << "Length error: " << e.what() << endl;
    }

    return 0;
}

