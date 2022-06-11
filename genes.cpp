#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char e='B';
    char r='R';
    char g='G';

    char a,b;
    cin>>a,b;
    if(a==b){
        cout<<a<<endl;
    }
    else if (a==r || b==r){
        cout<<r<<endl;
    }
    else if (a==e && b==g || a==g && b == e){
        cout<<b<<endl;
    }
}