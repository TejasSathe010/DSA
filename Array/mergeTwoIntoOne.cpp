#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mergeSortedTwoIntoOne(int arr1[], int size1, int arr2[], int size2){
  int result[size1 + size2];
  
  int i=0, j=0, k=0;
  while(i < size1 && j < size2){
   if(arr1[i] < arr2[j]){
     result[k++] = arr1[i++];
   } else{
     result[k++] = arr2[j++];
   }
  }
  
  while(i < size1){
    result[k++] = arr1[i++];
  }
  while(j < size1){
    result[k++] = arr2[j++];
  }
  
  
  for(int i=0; i < (size1 + size2); i++){
    cout << result[i] << " ";
  }
  
}


int main() {
    int arr1[] = { 1, 2, 3, 4, 5, 6};
    int arr2[] = { 6, 7, 8, 9};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    mergeSortedTwoIntoOne(arr1, size1, arr2, size2);
}