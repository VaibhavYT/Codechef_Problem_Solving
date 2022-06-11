#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int count=0;
        char f='?';
        char m = 'l';
        int n;
        cin>>n;
        char arr1[n+1];
        char arr2[n+1];
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
            cin>>arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr1[i]==f || arr2[i]==f)
            {
                arr1[i]=m;
                arr2[i]=m;
            }

            
        }
        for (int i = 0; i < n; i++)
        {
            if(arr1[i]!=arr2[i]){
                count++;
            }
        }
        
        


        cout<<count<<endl;
    }
    */
    bool isvowel(char aa){
        if(aa=='a'|| aa=='e'||aa=='i'||aa=='u')
        return true;
        return false;
    }
    int main(){
        int t;
        cin>>t;
        while (t--)
        {
            int n,i,j,k,wcount=0,bcount=0,ans=1e9;
            int x,y;
            cin>>n;
            string s,p;
            cin>>s>>p;
            for (char i = 'a'; i < 'z'; i++)
            {
                
            
            
            string ss=s;
            int count =0;
            string pp =p;
            for(int j=0;j<n;j++){
                if(ss[j]=='?')
                ss[j]=i;
                if(pp[j]=='?')
                pp[j]=i;
            }
            for(int j=0;j<n;j++){
                if(ss[j]==pp[j])
                continue;
                else if(isvowel(ss[j])!=isvowel(pp[j]))
                count=count+1;
                else
                count = count+2;
            }
            ans=min(ans,count);
        }
        cout<<ans<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }