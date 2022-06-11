#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int sum=0;
        int n;
        cin>>n;
            string s;
            cin>>s;   
        for (int i = 0; i <n ; i++)
        {
            for (int j = i+1; j <=n-1 ; j++)
            {
                if (j-i==abs(s[j]-s[i]))
                {  
                 sum++;
                }
                
            }
             
        }
     cout<<sum<<endl;  
    }
return 0;
    
}