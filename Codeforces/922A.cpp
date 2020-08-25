#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==1&&n==0)
    {
         cout<<"YES\n";
         return 0;
    }
    m-=1;
    if(m>n||m<=0)
        cout<<"NO\n";
    else{
   n-=m;
   if(n%2==0)
   cout<<"YES\n";
   else
     cout<<"NO\n";}
    return 0;
}
