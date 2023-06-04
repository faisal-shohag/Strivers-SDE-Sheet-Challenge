#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int l = 0, m = 0, h = n-1;

   while(m<=h) {
      if(arr[m] == 0) {
         swap(arr[l], arr[m]);
         l++;
         m++;
      } else if(arr[m] == 1) {
         m++;
      } else {
         swap(arr[h], arr[m]);
         h--;
      }
   }
}
