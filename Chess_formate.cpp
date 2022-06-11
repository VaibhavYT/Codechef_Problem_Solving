#include<iostream>
using namespace std;
int main(){
    int n;
    int a,b,c;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        cin>>b;
        c = a+b;
       
    }
    for (int  i = 0; i < n; i++)
    {
        if (c>3)
        {
            cout<<1<<endl;
        }
        break;
         if(3<c>10)
        {
            cout<<2<<endl;
        }
    }  
        
     
}

