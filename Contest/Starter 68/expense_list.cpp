#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
       int n,x;
       cin>>n>>x;
       int m= pow(2,x);
       while(m>0 && n>0){
           
           
           m =m/2;
           n--;
       }
       cout<<m<<endl;
   }
	return 0;
}