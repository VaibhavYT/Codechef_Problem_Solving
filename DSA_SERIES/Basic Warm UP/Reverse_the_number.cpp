#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long int sum = 0;
   long int r;
    while (t--)
    {
       long int n;
        cin>>n;

        while (n>0)
        {
             r= n%10;
              sum = sum*10+r;
            n /=10;
           
        }
        
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}