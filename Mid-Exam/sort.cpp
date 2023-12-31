#include <bits/stdc++.h>
using namespace std;

int* sort_it(int size) {
    int* array = new int[size]; 
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    // Sorting the array in descending order
    sort(array, array + size, greater<int>());
    
    return array;
}

int main() {
    int n;
    cin >> n;

    int* sortedArray = sort_it(n);

    // Printing the sorted array
    for (int i = 0; i < n; i++) {
        cout << sortedArray[i] << " ";
    }

    // Don't forget to free the allocated memory
    delete[] sortedArray;

    return 0;
}
