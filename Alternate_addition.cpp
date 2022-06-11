/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    int i = 0;
    while (t--)
    {
        cin>>a>>b;
        while (a<b)
        {
            i++;
            if(i%2!=0){
                a = a+1;
                if(a==b){
                    break;
                }
            }
            else{
                a = a+2;
                if(a==b){
                    break;
                }
            }
        }
        if(a==b){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        i = 0;
        
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    while (t--)
    {
        cin>>a>>b;
        if(b%a==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}