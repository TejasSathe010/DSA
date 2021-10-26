#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<pair<int, int>> printDuplicate(int arr[], int size, int sum){
  int flag = 0;
  vector<pair<int, int>> result;
  sort(arr, arr+size);
  
  int low = 0;
  int high = size - 1;
  
  while(low < high){
    if(arr[low] + arr[high] == sum){
      result.push_back({arr[low], arr[high]});
      low++;
      high--;
    }else if(arr[low] + arr[high] < sum) {
      low++;
    }else{
      high--;
    }
  }
  return result;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    auto result = printDuplicate(arr, size, sum);
    
    for(auto d : result){
      cout << d.first << " " << d.second << endl;
    }
}