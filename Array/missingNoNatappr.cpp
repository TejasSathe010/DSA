#include <iostream>
using namespace std;

int findMissing(int arr[], int size) {
    int totalSum = (size+1) * (size+2) / 2;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    int missing = totalSum - sum;
    return missing;
}


int main() {
    int arr[] = {1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, size);
    cout << missing << endl;
}