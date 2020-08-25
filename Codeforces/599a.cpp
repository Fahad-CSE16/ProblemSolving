#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,o,k,l;
    cin>>m>>n>>o;
    int h=min(m,n);
    if(h==m){
        k=min(n,o);
        l=max(n,o);}
    else
    {
        l=max(m,o);
        k=min(m,o);}
    if(n==m&&m==o)
        cout<<m+n+o<<endl;
    else if((h+k)>l)
        cout<<h+k+l<<endl;
    else
        cout<<(k+h)*2<<endl;
    return 0;
}

