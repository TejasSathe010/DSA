#include <iostream>
#include <set>
using namespace std;

int kthSmallest(arr, size) {
    set<int> smallest(arr, arr+size);

}


int main() {
    int[] arr = {1, 2, 3, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int kthSmall = kthSmallest(arr, size);
    cout << kthSmall << endl;
}