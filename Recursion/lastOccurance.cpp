#include <iostream>
using namespace std;

int lastOcc(int arr[], int size, int index, int key) {
    // Base condition should always be first in function.
    if(index == size) {
        return -1;
    }

    int restArray = lastOcc(arr, size, index+1, key);

    if(restArray != -1) {
        return restArray;
    }

    if(arr[index] == key) {
        return index;
    }
    return -1;
}


int main() {
    int key = 6;

    int arr[] = {1, 2, 3, 4, 5, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = lastOcc(arr, size, 0, key);
    cout << "index: " << index << endl;
}