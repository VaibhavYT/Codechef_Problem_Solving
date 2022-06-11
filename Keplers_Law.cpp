#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double s = ((a*a)/(c*c*c));
        double p = ((b*b)/(d*d*d));
        
        if(s==p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}