#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    string s;
    cin>>s;
    int cnt=0;
   int i=0;int j=1;
   while(j<n){
    if(s[i]==s[j]){
        cnt++;
    }
    i++;j++;
   }
   cout<<cnt<<endl;
    return 0;
}
