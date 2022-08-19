#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int p;
    cin>>t;
    int a = 0;
    int b = 0;
    while (t--)
    {
        cin>>p;
        a = p/100;
        b = p%100;
        if(a+b<=10){
            cout<<a+b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
    
}