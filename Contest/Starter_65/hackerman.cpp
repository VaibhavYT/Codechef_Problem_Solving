#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
     int a,b;
     cin>>a>>b;
     int sum =a+b;
     int flag=0;
     for(int i= 2;i<sum;i++){
         if(sum%i==0){
             flag++;
             break;
         }
     }
     if(flag==0){
         cout<<"Alice"<<endl;
     }
     else{
         cout<<"BOb"<<endl;
     }
   }
	return 0;
}
