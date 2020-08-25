#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,d,f;
    cin>>a>>b>>n;
   d=abs(a)+abs(b);
   if(n>=d&&((n%2)==(d%2)))
            cout<<"YES\n";
        else
            cout<<"NO\n";


    return 0;
}
