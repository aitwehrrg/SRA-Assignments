#include <bits/stdc++.h>
using namespace std;

namespace dim2 {
    void input(int (*arr)[4]) {
        for (int i = 0; i < 3; i++) for(int j = 0; j < 4; j++) cin >> arr[i][j];
    }

    void print (int (*arr)[4]) {
        for(int i = 0; i < 3; i++) for(int j = 0; j < 4; j += 3) cout << arr[i][j] << endl;
    }
}

namespace dim1 {
    void input(int *arr) {
        for (int i = 0; i < 9; i++) cin >> arr[i];
    }

    void print(int *arr) {
        for (int i = 0; i < 9; i += 3) cout << arr[i] << endl;
    }
}

int main() {
    int arr2[3][4], arr1[9];
    cout << "Enter elements of 2D Array:" << endl;
    dim2 :: input(arr2);
    cout << "Enter elements of 1D Array:" << endl;
    dim1 :: input(arr1);

    cout << "Elements of 2D Array at Index which is a multiple of 3:" << endl;
    dim2 :: print(arr2);
    cout << "Elements of 1D Array at Index which is a multiple of 3:" << endl;
    dim1 :: print(arr1);
    return 0;
}