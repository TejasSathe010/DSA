#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void secondLargestNumber(int arr[], int size){
  int largest = INT_MIN;
  int secondLargest = INT_MIN;
  for(int i=0; i < size; i++){
    
    if(arr[i] > largest){
      largest = arr[i];
    }

    if(arr[i] < largest && arr[i] > secondLargest){
      secondLargest = arr[i];
    }
    cout << largest << " " << secondLargest << endl;
  }
  cout << "secondLargest " << secondLargest;
}


int main() {
    int arr[] = {-4, 4, 5, 5, 6, 1, 3, -9, 7, 7, 5, 6};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    secondLargestNumber(arr, size);
}