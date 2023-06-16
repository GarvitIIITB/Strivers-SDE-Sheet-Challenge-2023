#include <bits/stdc++.h> 

vector<vector<int>> mergeIntervals(vector<vector<int>> &ints)
{
    int n = ints.size();
    if(n <=1){
        return ints;
    }
    sort(ints.begin(), ints.end());
    vector<vector<int>> ans;
    ans.push_back(ints[0]);
    for (int i = 1; i < n; i++) {
        if (ints[i][0] <= ans.back()[1]) {
            ans.back()[1] = max(ans.back()[1], ints[i][1]);
        } else {
            ans.push_back(ints[i]);
        }
    }
    return ans;
}
