#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    string str;
	    cin>>str;
	    
	    int mid=k/2;
	    int iter=0, chance=0;
	    int kis=k;
	    if(k%2==0)
	    {
	        while(k--)
	        {
	            if(chance==0)
	            {
	                mid+=iter;
	                chance=1;
	            }
	            else{
	                mid-=iter;
	                chance=0;
	            }
	            cout<<str[mid];
	            iter++;
	        }
	    }
	    else{
	        while(k--)
	        {
	            if(chance==0)
	            {
	                mid-=iter;
	                chance=1;
	            }
	            else{
	                mid+=iter;
	                chance=0;
	            }
	            cout<<str[mid];
	            iter++;
	        }
	    }
	    
	    for(int i=kis;i<n;i++)
	    {
	        cout<<str[i];
	    }
	    cout<<endl;
	}
}
