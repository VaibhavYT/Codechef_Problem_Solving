#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int a = 1000000;
	    int b = -1000000;
	  for (int i=0; i <n; i++)
    {
        
        for (int j=i; j<n; j++)
        {
            
            
            for (int k=i; k<=j; k++)
                if(arr[k]>b){
                    b = arr[k];
                }
                else if(arr[k]<a){
                     a= arr[k];
                }
        }
    }
    cout<<a*a<<" "<<b*b<<endl;
	}
	return 0;
}
