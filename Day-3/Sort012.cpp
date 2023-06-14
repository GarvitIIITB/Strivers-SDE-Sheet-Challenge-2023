#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
   int z = 0;
   int o = 0;
   int t = n-1;

   while(o <= t){
      if(a[o] == 0){
         int temp = a[o];
         a[o] = a[z];
         a[z] = temp;
         z++;
         o++;
      }
      else if(a[o] == 1){
         o++;
      }
      else if(a[o] == 2){
         int temp = a[o];
         a[o] = a[t];
         a[t] = temp;
         t--;
      }
   }
}
