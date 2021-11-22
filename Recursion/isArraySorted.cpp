#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int size) {
    if (size == 1) return true;
    return (arr[0] < arr[1]) && isArraySorted(arr+1, size-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    bool isArraySortedOrNot;
    int size = sizeof(arr) / sizeof(arr[0]);
    isArraySortedOrNot = isArraySorted(arr, size);
    cout << isArraySortedOrNot << endl;
}


// if (size == 1 or size == 0) return true;
//     return (arr[size-1] < arr[size-2]) && isArraySorted(arr, size-1);