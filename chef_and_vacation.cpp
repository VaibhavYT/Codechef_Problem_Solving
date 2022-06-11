#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int sum= x+y;
        if(sum<z){
            cout<<"PLANEBUS"<<endl;
        }
        else if(sum>z){
            cout<<"TRAIN"<<endl;

        }
        else
        {
            cout<<"EQUAL"<<endl;
        }
        
    }
    
}