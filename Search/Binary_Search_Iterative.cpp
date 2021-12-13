#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int mid = (left + right) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int key = 12;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, size, key);
    cout << index << endl;
}