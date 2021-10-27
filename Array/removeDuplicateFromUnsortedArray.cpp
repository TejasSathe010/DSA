// Hashmap Approach
// Set Approach
// Iterrative Approach

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void removeDuplicateFromUnsortedArray(int arr[], int size){
  sort(arr, arr+size);
  
  int j = 0;
  for(int i = 0; i < size-1; i++){
   if(arr[i] != arr[i+1]){
     arr[j++] = arr[i];
   }
  }
  arr[j] = arr[size-1];
  
  for(int i = 0; i < j; i++){
   cout << arr[i] << "";
  }
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 5, 5, 6, 7, 7, 5, 6};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicateFromUnsortedArray(arr, size);
}