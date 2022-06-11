#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    for (int i = 0; i < n; i++)
    {
        
        cin>>a>>b;

    

    if((a+b)%2==0){
        cout<<"Bob"<<endl;
    }    
    else
    {
        cout<<"Alice"<<endl;
    }
    }
    
}