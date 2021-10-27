#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void segregate0sAnd1s(int arr[], int size){
  int j = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] == 0){
      arr[j++] = arr[i];
    }
  }
  while(j < size){
    arr[j++] = 1;
  }
  
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  
}


int main() {
    int arr[] = {0, 1, 0, 1, 0, 0, 0, 1, 1, 0};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    segregate0sAnd1s(arr, size);
}