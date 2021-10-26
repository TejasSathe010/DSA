#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void printCommonElementInAll3Arrays(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3){
  
  // cout << "In the function " << size1 << size2 << size3;
  int i = 0, j = 0, k = 0;
  
  while(i < size1 && j < size2 && k < size3){
    if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
      cout << arr1[i];
      i++;
      j++;
      k++;
    }else if(arr1[i] > arr2[j]){
      j++;
    }else if(arr2[j] > arr3[k]){
      k++;
    }else{
      i++;
    }
  }
}


int main() {
    int arr1[] = { 1, 2, 3, 4, 5, 6};
    int arr2[] = { 6, 7, 8, 9};
    int arr3[] = { 6, 12, 18, 24, 36};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printCommonElementInAll3Arrays(arr1, size1, arr2, size2, arr3, size3);
}