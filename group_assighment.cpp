#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    
    
    while (t--)
    {
        cin>>n;
        bool flag = true;
        
        vector<int> arr(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
  
   
        for (int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        int c=0;
        for (auto x : mp)
        {
            if(x.second%x.first!=0){
            flag = false;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
    return 0;
}