#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int index, int key) {
    if(index == size) {
        return -1;
    }
    if(arr[index] == key) {
        return index;
    }
    return firstOcc(arr, size, index+1, key);
}


int main() {
    int key = 6;

    int arr[] = {1, 2, 3, 4, 5, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = firstOcc(arr, size, 0, key);
    cout << "index: " << index << endl;
}