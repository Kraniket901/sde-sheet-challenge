#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  unordered_map<int,int>m;
  int maxi = 0;
  int s = 0;
  for(int i = 0; i < arr.size(); i++){
    s+=arr[i];
    if(s==0){
      maxi = max(maxi,i+1);
    }else{
      if(m.find(s)!=m.end()){
        maxi = max(maxi, i-m[s]);
      }else{
        m[s]=i;
      }
    }
  }
  return maxi;
}