#include <iostream>
using namespace std;

void findDuplicate(int arr[], int size) {
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);


    fast = arr[0];
    while(slow!=fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    cout << slow << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicate(arr, size);
}