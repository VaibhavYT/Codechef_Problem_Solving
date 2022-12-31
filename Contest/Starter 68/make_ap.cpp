#include <iostream>
using namespace std;

int main() {
	// your code goes here

  int t;
  cin>>t;
  while(t--){
      int a,b;
      cin>>a>>b;
      int c;
      int n=0;
      for(int i=a;i<=b;i++){
          if(i-a==b-i){
              c=i;
              n++;
              break;
          }
      }
      if(n>0){
          cout<<c<<endl;
      }
      else{
          cout<<-1<<endl;
      }
  }
	return 0;
}