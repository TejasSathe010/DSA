#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void deleteAnElementFromSpPos(int arr[], int size, int pos){
  for(int i=pos-1; i < size-1; i++){
    arr[i] = arr[i+1];
  }
  size--;
  
  for(int i=0; i<size; i++){
    cout << arr[i];
  }
  
}


int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6};
    int pos = 3;
  
    int size = sizeof(arr) / sizeof(arr[0]);
    deleteAnElementFromSpPos(arr, size, pos);
}