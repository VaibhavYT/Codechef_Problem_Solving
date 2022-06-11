#include<bits/stdc++.h>
using namespace std;
define ll long long;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string ss;
        cin>>ss;
        ll s1=0,s2=0;
        for(ll i=0;i<n;i++)
        if(ss[i]=='1')
        s1++;
        else
        s2++;
        ll ans= 0;
        ans = max(ans,min(s1,s2)-1);
        cout<<ans<<endl;
    }
    return 0;
}