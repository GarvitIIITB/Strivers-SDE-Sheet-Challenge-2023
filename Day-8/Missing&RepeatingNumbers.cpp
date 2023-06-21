#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	unordered_set<int> visited;
    int mnum = 0;
    int rnum = 0;
    for (int &num : arr) {
        if (visited.count(num)) {
            rnum = num;
        } else {
            visited.insert(num);
        }
    }
    for (int num = 1; num <= n; num++) {
        if (visited.count(num) == 0) {
            mnum = num;
            break;
        }
    }
    return { mnum, rnum };
}
