#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;



int findThatElement(int arr[], int size) {
    int maxLeft[size-1];
    int minRight[size-1];

    int max = arr[0];
    maxLeft[0] = arr[0];
    int min = arr[size - 1];
    minRight[size - 1] = arr[size - 1];

    for (int i = 1; i < size; i++) {
        if(arr[i] > max) {
            maxLeft[i] = arr[i];
            max = arr[i];
        } else {
            maxLeft[i] = max;
        }
    }

    for(int i=size-2; i>=0; i--) {
        if(arr[i] < min) {
            minRight[i] = arr[i];
            min = arr[i];
        } else {
            minRight[i] = min;
        }
    }

    for(int i=1; i<=size-2; i++) {
        if(arr[i] >= maxLeft[i] && arr[i] <= minRight[i]) {
            return arr[i];
        }
    }
    
    return -1;
}


int main() {
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ele = findThatElement(arr, size);
    cout << ele << endl;
}