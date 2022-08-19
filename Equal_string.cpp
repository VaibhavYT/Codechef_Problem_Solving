#include<bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
    string a[n];
    string b[n];
    map<string> st;
    int c = 0;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            st.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if(st.find(b[i])==st.end()){
                c++;
            }
        }
        
        cout<<c<<endl;
        c = 0;
    }
    
}