#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    int y;
    long sum = 0;
    while (n--)
    {
        cin>>x>>y;
       
        if(x>y){
            sum = x-y;
            
        }
        cout<<sum<<endl;;
        sum = 0;
    }
    
}