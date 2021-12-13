#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key) {
    if(start == end) {
        if(arr[start] == key) {
            return start;
        }
    } else {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] > key) {
            return binarySearch(arr, start, mid - 1, key);
        } else {
            return binarySearch(arr, mid + 1, end, key);
        }
    }
    return -1;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int key = 12;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int left = 0, right = size - 1;
    int index = binarySearch(arr, left, right, key);
    cout << index << endl;
}