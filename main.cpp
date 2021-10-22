#include <iostream>
using namespace std;

void removeDuplicate(int arr[], int size){
  int j=0;
  for(int i=0; i<size-1; i++){
    if(arr[i] != arr[i+1]){
      arr[j++] = arr[i];
    }
  }
  arr[j] = arr[size - 1];
  for(int i=0; i<=j; i++){
    cout << arr[i];
  }
  return;
}

int main(){
  int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  removeDuplicate(arr, size);
  return 0;
}