#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n= s.length();
        int c=0;
        int p= -1;
        if(n==1){
            cout<<"NO"<<endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                
                c++;
                p =i+1;
            }
        }
        if (c==0 || c==1 && p ==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        
        
         
        }
        
    }
    
