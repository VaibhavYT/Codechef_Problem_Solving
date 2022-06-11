#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N,M,K;
        cin>>N>>M>>K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        int sum =0;
        int ans=0;
        for(int i=0; i<N;i++){
            sum+=arr[i];
            if(i==M-1 && sum==M){
                ans=K;
            }
        }
        if (sum==N)
        {
            ans=100;
        }
        cout<<ans<<endl;
            
        }
        
        
    }
    
