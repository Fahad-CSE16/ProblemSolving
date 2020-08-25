#include<bits/stdc++.h>
using namespace std;
int cnt(int n,int x){
    if(n/x==0)
        return 0;
    else return (n/x)+cnt((n/x)+(n%x),x);
}
int main()
{
    int n,x;
    cin>>n>>x;
    cout<<n+cnt(n,x)<<endl;
    return 0;
}
