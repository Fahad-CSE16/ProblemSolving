#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,r,c;
    cin>>n>>m>>a;
    int f,h;
    r=n/a;
    if(n%a!=0)
        r++;
    c=m/a;
    if(m%a!=0)
        c++;
        cout<<r*c<<endl;

    return 0;
}
