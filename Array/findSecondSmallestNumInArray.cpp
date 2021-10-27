#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void secondSmallestNumber(int arr[], int size){
  int smallest = INT_MAX;
  int secondSmallest = INT_MAX;
  for(int i=0; i < size; i++){
    if(arr[i] < smallest){
      smallest = arr[i];
    }
    
    if(arr[i] > smallest && arr[i] < secondSmallest){
      secondSmallest = arr[i];
    }
    cout << smallest << " " << secondSmallest << endl;
  }
  cout << "secondSmallest " << secondSmallest;
}


int main() {
    int arr[] = {-4, 4, 5, 5, 6, 1, 3, -9, 7, 7, 5, 6};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    secondSmallestNumber(arr, size);
}