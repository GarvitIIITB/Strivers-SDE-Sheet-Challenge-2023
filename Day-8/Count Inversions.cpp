#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    int l = 0;
    int h = n - 1;
    long long cnt = 0;
    while(l != h){
        if((l+1) == h){
            if(arr[l] > arr[h]){
                cnt++;
            }
            h = n - 1;
            l++;
        }
        if(arr[l] > arr[h]){
            cnt++;
            h--;
        }
        else{
            h--;
        }
    }
    return cnt;
}
