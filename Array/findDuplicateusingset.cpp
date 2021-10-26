#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//O(n)

vector<int> printDuplicate(int arr[], int size){
  int flag = 0;
  vector<int> result;
  unordered_set<int> u_set;
  for(int i=0; i < size; i++){
    if(u_set.find(arr[i]) != u_set.end()){
      result.push_back(arr[i]);
      flag = 1;
      
    }else{
      u_set.insert(arr[i]);
    }
  }
  if(!flag){
      result.push_back(-1);
    }
  return result;
}



int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    auto result = printDuplicate(arr, size);
    
    for(int d : result){
      cout << d << " ";
    }
}