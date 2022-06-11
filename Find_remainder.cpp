#include<iostream>
using namespace std;
int main(){
    int n;
    int a,b;
    cin>>n;
    int i = 0;
    int fact;
    while (n>i)
    {
        
        cin>>a,b;
        fact = a % b;
        i++;
        cout<<fact<<endl;
    }
    
}
/*#include <iostream>
using namespace std;
int main() {
    int a,b,t,r;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        r=a%b;
         cout<<r<<endl;
    }
   
 return 0;
}*/
