#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int r= 0;
        int l=0;
        int u = 0;
        int d= 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='R'){
                r++;
            }
            else if(s[i]=='L'){
                l++;
            }
            else if(s[i]=='U'){
                u++;
            }
            else {
                d++;
            }
        }
        if(r==l && u == d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}