#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%3==0){
                cout<<"0"<<endl;
            }
            else if ((arr[i]%3) != 0)
            {
                arr[i] = arr[i]-1;
                arr[i+1] = arr[i+1]+1;
                if(arr[i]%3==0 && arr[i+1]%3 == 0){
                    cout<<"1"<<endl;
                }
            }
            else
            {
                cout<<"-1"<<endl;
            }
            
            
        }
        
    }
    
}