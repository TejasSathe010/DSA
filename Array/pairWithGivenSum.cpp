#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<pair<int, int>> printDuplicate(int arr[], int size, int sum){
  int flag = 0;
  vector<pair<int, int>> result;
  unordered_set<int> u_set;
  
  for(int i=0; i < size; i++){
    int complement = sum - arr[i];
    if(u_set.find(complement) != u_set.end()){
      // result.push_back(complement);
      result.push_back({complement, arr[i]});
      flag = 1;
      
    }else{
      u_set.insert(arr[i]);
    }
  }
  if(!flag){
      result.push_back({-1, -1});
    }
  return result;
}



int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    auto result = printDuplicate(arr, size, sum);
    
    for(auto d : result){
      cout << d.first << " " << d.second << endl;
    }
}