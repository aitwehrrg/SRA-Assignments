#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int size;
    cout << "Enter the number of elements in array:" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements in array:" << endl;
    for (int i = 0; i < size; i++) cin >> arr[i];

    sort(arr, size);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < size; i++) cout << arr[i] << endl;
    return 0;
}