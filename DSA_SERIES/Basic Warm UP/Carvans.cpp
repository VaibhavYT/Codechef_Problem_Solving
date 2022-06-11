/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 0;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(n==1){
            cout<<1<<endl;
        }
        else if(n==2){
            if(arr[1]<arr[0]){
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
            
        }
        else if(n>2)
        {
            for (int i = 0; i < n; i++)
            {
                if(arr[i]>arr[i+1]){
                    count++;
                }
            }
            
        }
        
        cout<<count<<endl;
    }
    
}*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    
    int t ;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
          cin >> arr[i];
    }
    int min = arr[0];
    int c=1;
    for(int i=1;i<n;i++){
          if(arr[i]<=min){
                c++;
                min = arr[i];
          }
    }
    cout << c <<'\n';
    }
      return 0;
    }