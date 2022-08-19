#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    string s;
    string f;
    while (t--)
    {
        
        int n;
        cin >> n;
        cin >> s;
        cin >> f;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if(f[i]=='1'){
                c++;
            }
           
            
        }
         if(c%2==0){
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
            
            c= 0;

    }

    return 0;
}
