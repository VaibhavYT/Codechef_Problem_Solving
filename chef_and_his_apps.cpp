#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int s,x,y,z;
    int c = 0;
    int sum = 0;
    while (t--)
    {
        cin>>s>>x>>y>>z;
        if(sum=x+y+z<=s){
            c=0;
        }
        else if (x>y && y+z<=s)
        {
            c = 1;
        }
        else if(x<y && x+z<=s){
            c=1;
        }
        else
        {
            c=2;
        }
        
        
    }
    
}