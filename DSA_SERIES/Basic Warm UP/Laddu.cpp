#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int a;\
        string nat;
        cin>>a>>nat;
        bool ind=false;
        if(nat == "INDIAN") ind = true;
        long long l=0;
        string s;
        int n;
        for(int i=0;i<a;i++){
            cin>>s;
            if(s== "CONTEST_WON"){
                cin>>n;
                l+=300;
                if(n<20) l+= 20-n;
            }
            else if(s== "TOP_CONTRIBUTOR" ){ 
                l+=300;
            }
            else if(s== "BUG_FOUND" ){
                cin>>n;
                l+=n;
            }
            else if(s== "CONTEST_HOSTED"){
                l+=50;
            }
        }
        if(ind) cout<<l/200<<endl;
        else cout<<l/400<<endl;
    }
    return 0;
}





























/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum = 350;
    int count = 0;
    while (t--)
    {
        int activities;
        string nationality;
        cin>>activities>>nationality;
        string contestwon;
        int rank;
        cin>>contestwon>>rank;
        string total_contribution;
        cin>>total_contribution;
        string bug_find;
        int laddu;
        cin>>bug_find>>laddu;
        string contest_host;
        cin>>contest_host;
        if(rank<=20){
            sum = sum + 300 +(20-rank);
        }
        sum = sum +laddu;
        if(nationality=="INDIAN"){
            while (sum>200)
            {
                sum = sum - 200;
                count++;
            }
            
        }
        else {
            while (sum>400)
            {
                sum = sum - 400;
                count++;
            }
            
        }
        cout<<count<<endl;
        sum = 350;

    }
    return 0;
}
*/