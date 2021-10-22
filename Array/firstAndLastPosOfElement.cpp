#include <iostream>

using namespace std;

int findFirst(int arr[], int start, int end, int target, int size){
  if(end >= start){
    int mid = start + (end - start) / 2;
    if((mid == 0 || target > arr[mid - 1]) && arr[mid] == target){
      return mid;
    } else if(target > arr[mid]) {
      return findFirst(arr, (mid+1), end, target, size);
    } else {
      return findFirst(arr, start, (mid-1), target, size);
    }
  }
  return -1;
}

int findLast(int arr[], int start, int end, int target, int size){
  if(end >= start){
    int mid = start + (end - start) / 2;
    if((mid == size-1 || target < arr[mid + 1]) && arr[mid] == target){
      return mid;
    } else if(target < arr[mid]) {
      return findLast(arr, start, (mid-1), target, size);
    } else {
      return findLast(arr, (mid+1), end, target, size);
    }
  }
  return -1;
}


int main(){
  
  int arr[] = {1, 2, 3, 4, 4, 4, 4, 5, 5, 7, 9};
  int target = 4;
  int size = sizeof(arr) / sizeof(int);

  
  int first = findFirst(arr, 0, size-1, target, size);
  int last = findLast(arr, 0, size-1, target, size);
  cout << first << " " << last << endl;
  
  
}