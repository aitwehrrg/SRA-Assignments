#include <bits/stdc++.h>
using namespace std;

int main() {
    int* ptr = nullptr;
    ptr++;  // Point to the next memory location
    cout << "Size of integer data type is " << reinterpret_cast<uintptr_t>(ptr) << "." << endl; // Convert hexadecimal address (0x4) to a decimal integer (4).
    return 0;
}