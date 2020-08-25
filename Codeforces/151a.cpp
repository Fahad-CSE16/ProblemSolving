#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int f=k*l;
    f/=nl;
    p/=np;
    int h=c*d;
    int mx=min(f,p);
    mx=min(mx,h);
    cout<<mx/n<<endl;

    return 0;
}
