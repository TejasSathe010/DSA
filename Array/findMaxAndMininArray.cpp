#include <iostream>
#include <climits>
using namespace std;

void findMaxAndMin(int arr[], int size) {
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > min) max = arr[i];
    }
    cout << min << " " << max << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMaxAndMin(arr, size);
}