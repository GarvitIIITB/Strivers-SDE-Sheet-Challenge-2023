#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    vector<int>ans;
    unordered_map<int,int>mpp;
    int mini = int(n/3)+1;
    for(int i = 0;i < n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]] == mini){
            ans.push_back(arr[i]);
        }
        if(ans.size() == 2){
            break;
        }
    }
    return ans;
}
