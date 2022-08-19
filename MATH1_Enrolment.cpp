#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y;
    int ans;
    while (t--)
    {
        cin>>x>>y;
        if(y>x){
        ans = y-x;
        cout<<ans<<endl;
        }
        else{
        cout<<0<<endl;
        }
    }
    return 0;
     
}