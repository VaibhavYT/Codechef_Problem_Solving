#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int s,c;
        cin>>s>>c;
        if(s%2!=0 && c%2!=0){
            cout<<(s/2+1)*(c/2+1)<<endl;
        }
        else if(s%2==0 && c%2!=0){
            cout<<(s/2)*(c/2+1)<<endl;
        }
        else if(s%2!=0 && c%2==0){
            cout<<(s/2+1)*(c/2)<<endl;
        }
        else
        {
            cout<<(s/2)*(c/2)<<endl;
        }
        
    }
    
}