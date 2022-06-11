#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double s,a,b,c;
        cin>>s>>a>>b>>c;
        double per=(s*c)/100;
        
       double pers=s+per;
       cout<<pers<<endl;
        if(a<=pers && pers<=b){
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
         
    }
    
}