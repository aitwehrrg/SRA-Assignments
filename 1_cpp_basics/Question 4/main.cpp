#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> :: iterator itr;
    int size;

    cout << "Input:" << endl;
    cin >> size;

    vector <int> vec(size);
    itr = vec.begin();
    for (int i = 0; i < size; i++) {
        cin >> *itr;
        itr++;
    }

    int min = vec.at(0), max = vec.at(0);
    for (int i : vec) {
        if (i < min) min = i;
        if (i > max) max = i;
    }
    cout << "Output:" << endl;

    cout << "Smallest: " << min << endl;
    cout << "Biggest: " << max << endl;
    return 0;
}