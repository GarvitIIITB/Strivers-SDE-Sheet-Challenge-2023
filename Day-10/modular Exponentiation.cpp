#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	long ans = 1;
	long extra = x;
	while(n){
		if(n%2!=0){
			ans = ((ans%m)*(extra%m))%m;
		}
		extra = ((extra%m)*(extra%m))%m;
		n = n>>1;
	}
	return (int)(ans%m);
}
