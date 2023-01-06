#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++) {
	        int y,m,k,d;
	        cin>>y>>m>>k>>d;
	        
	        int element=y*(k-1);
	        int mobdays=y*k+m;
	        int rem=d%mobdays;
	        if(rem==0 || (rem-element)>0) {
	                cout<<"YES"<<endl;
	        }
	        else {
	                cout<<"NO"<<endl;
	        }
	}
	return 0;
}