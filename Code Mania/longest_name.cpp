#include <bits/stdc++.h>
using namespace std;
 

int countPairs(string s1, int n1, string s2, int n2,string s3,int n3)
{
 
    int freq1[100] = { 0 };
    int freq2[100] = { 0 };
    int freq3[100] = {0};
 
    
    int i, count = 0;
 
   
    for (long i= 0; i < n1; i++){
        freq1[s1[i] - 'a']++;
    }
    
    for (long i = 0; i < n2; i++)
     {   freq2[s2[i] - 'a']++;
     }
    for (long i = 0; i < n3; i++)
    {
        freq3[s3[i]-'a']++;
    }
    

    
    for (i = 0; i < 100; i++)
        count += (min(freq1[i], min(freq2[i],freq3[i])));
 
    return count;
}
 

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int n1 = s1.length(), n2 = s2.length();
    int n3 = s3.length();
    cout << countPairs(s1, n1, s2, n2,s3,n3);
 
    return 0;
}