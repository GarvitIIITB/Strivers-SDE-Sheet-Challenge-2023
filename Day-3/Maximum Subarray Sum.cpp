#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 00;
    long mx = LONG_MIN;
    for(int i = 0; i < n;i++){
        sum += arr[i];

        if(sum > mx){
            mx = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    if(mx<0) mx = 0;
    return mx;
}