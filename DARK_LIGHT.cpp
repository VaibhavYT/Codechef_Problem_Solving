#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==0 && n%4==0){
            cout<<"off"<<endl;

        }
        else if(k==0 && n%4!=0 ){
            cout<<"on"<<endl;
        }
        else if(k==1 && n==0 ){
            cout<<"on"<<endl;
        }
        else if(k==1 && n%4==0){
            cout<<"on"<<endl;
        }
        else{
            cout<<"Ambiguous"<<endl;
        }

    }
    
}