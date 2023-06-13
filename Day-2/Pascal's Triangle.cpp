#include <bits/stdc++.h>

vector<long long int>rows(int r){
  long long ans = 1;
  vector<long long int>ansrows;
  ansrows.push_back(ans);
  for(int i = 1; i < r; i++){
    ans = ans*(r-i);
    ans = ans / i;
    ansrows.push_back(ans);
  }
  return ansrows;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> finalans;
  for(int i = 1; i <=n;i++){
    finalans.push_back(rows(i));
  }
  return finalans;
}