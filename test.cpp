#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum=1;
    int i =0;
    while (t--)
    {
        int n, d;
        cin>>n>>d;
        if(d<=10){
        while (i!=d)
        {
            sum = sum*2;
            i++;
        }