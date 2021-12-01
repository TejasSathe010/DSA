#include <iostream>
using namespace std;


int maxSubarraySum(int arr[], int size) {
    int maxSum = 0;
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if(sum < 0) {
            sum = 0;
        } 
    }
    return maxSum;
 }


int main() {
    int arr[] = {1,2,3,-2,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, size);
    cout << maxSum << endl;
}