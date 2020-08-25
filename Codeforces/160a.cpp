#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,val=0,b=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b+=a[i];
    }
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        val+=a[i];
        b-=a[i];
        cnt++;
        ///cout<<val<<" "<<b<<endl;
        if(val>b)
            break;
    }
    cout<<cnt<<endl;
    return 0;
}
