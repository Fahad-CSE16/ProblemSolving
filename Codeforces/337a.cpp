#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cnt=0;
    cin>>n>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    sort(a,a+x);
    cnt=a[x-1]-a[0];
    for(int i=0;i<x-n+1;i++){
        cnt=min(cnt,a[i+n-1]-a[i]);
    }
    cout<<cnt<<endl;
    return 0;
}
