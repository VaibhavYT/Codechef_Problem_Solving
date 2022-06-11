#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n<=18){
            cout<<"Children"<<endl;
        }
        else if(n>=19 && n<=55){
            cout<<"Citizens"<<endl;
        }
        else
        {
            cout<<"Senior  Citizens"<<endl;
        }

        
    }
    return 0;
    
}