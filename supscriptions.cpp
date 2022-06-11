#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int prices;
    
    int c = 0;
    while(t--)
    {
        
    
    cin>>n;
    
    cin>>prices;
    while (n>=6)
    {
        n = n -6;
        c++;
    }
    if(n>0){
        c++;
    }
    int total = c*prices;
    cout<<total<<endl;
    total = 0;
    c=0;
    }
    
}