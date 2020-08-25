#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int minn,maxx;
    maxx=a[1];
    minn=a[1];
    for(int i=2;i<=n;i++){
        if(a[i]<minn){
            minn=a[i];
            cnt++;
        }
        else if(a[i]>maxx){
            maxx=a[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
