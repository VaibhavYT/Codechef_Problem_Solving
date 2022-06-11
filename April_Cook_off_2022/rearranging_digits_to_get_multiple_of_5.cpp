#include <iostream>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	     int c = 0;    
	    for(int i = 0; i<s.size(); i++){
	        if(s[i]=='0' || s[i]=='5'){
	             c+=1; break;
	       }  
	    }
	    if(c >= 1) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    
	   
	}
	return 0;
}
