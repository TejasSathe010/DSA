#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if(b == 0) return a;
    return GCD(b, a%b);
}

void rotateArray(int arr[], int size, int d) {
    d = d % size;
    int g_c_d = GCD(size, d);
    // cout << g_c_d << endl;

    for(int i = 0; i < g_c_d; i++) {
        int temp = arr[i];
        int j = i;
        while(1) {
            int k = j + g_c_d;

            if(k >= size) {
                k = k - size; 
            }

            if(k == i) {
                break;
            }

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int d = 2;

    int size = sizeof(arr) / sizeof(arr[0]);
    rotateArray(arr, size, d);
    printArray(arr, size);
}