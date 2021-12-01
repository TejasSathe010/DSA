#include <iostream>
using namespace std;

int findMissingThrXOR(int arr[], int size) {
    int arr_XOR = arr[0];
    int n_XOR = 1;

    for(int i = 1; i < size; i++) {
        arr_XOR = arr_XOR ^ arr[i];
    }

    for(int i = 2; i <= size+1; i++) {
        n_XOR = n_XOR ^ i;
    }

    return (arr_XOR ^ n_XOR);
}



int main() {
    int arr[] = {1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissingThrXOR(arr, size);
    cout << missing << endl;
}