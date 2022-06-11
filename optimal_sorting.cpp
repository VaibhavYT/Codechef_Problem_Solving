// #include <iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	// your code goes here
	
	int ta=0,tp=1;
	cin>>tp;
	while(ta++<tp)
	{
	    ll n;cin>>n;
	    vector<ll>a(n),b(n);
	    for(ll i=0;i<n;i++){
	        cin>>a[i],b[i]=a[i];
	    }
	    sort(b.begin(),b.end());
	    ll ut = n-1;
	    ll ans = 0;
	    while(ut>0){
	        if(a[ut]!=b[ut]){
	            ll ma = b[ut],mi = a[ut];
	            ll i = ut;
	            while(i>0){
	                if(a[i]!=b[ut])i--;
	                else break;
	                mi = min(a[i],mi);
	            }
	            ll pos = lower_bound(b.begin(), b.end(), mi) -b.begin();
	            for(ll j=pos;j<i;j++) mi = min(mi,a[j]);
	            while(b[pos]!=mi){
	                pos = lower_bound(b.begin(),b.end(),mi)- b.begin();
	                for(ll j=pos;j<i;j++)mi=min(mi,a[j]);
	            }
	            ans+=(ma-mi);
	            ut = pos-1;
	        }
	        else ut-=1;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
