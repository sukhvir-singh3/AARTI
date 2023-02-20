#include <iostream>
#include <new> // for std::bad_alloc

int main() {
    try {
        int* arr = new int[100000000000]; // try to allocate a large array
        std::cout << "Array allocated successfully" << std::endl;
        delete[] arr; // deallocate the array
    }
    catch (const std::bad_alloc& e) {
        std::cerr << "Failed to allocate array: " << e.what() << std::endl;
    }
    return 0;
}

