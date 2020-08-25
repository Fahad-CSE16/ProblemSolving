#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[101];
    string k;
    k="hello";
    cin>>s;
    int j=0;
     int l=strlen(s);
     for(int i=0;i<l;i++){
        if(s[i]==k[j]){
            j++;
        }
     }
     if(j==5)
        cout<<"YES\n";
     else
        cout<<"NO\n";

  return 0;
}
