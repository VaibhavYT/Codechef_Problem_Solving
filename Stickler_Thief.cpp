#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
   if(n==0) return 0;
       if(n==1) return arr[0];
       
       int v1 = arr[0];
       int v2 = max(v1, arr[1]);
       
       for(int i=2; i<n; i++){
           int temp = v2;
           v2 = max(v2, v1+arr[i]);
           v1 = temp;
       }
       
       return v2;
}