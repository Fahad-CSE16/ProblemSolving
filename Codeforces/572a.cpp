#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int k,l;
    cin>>k>>l;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
      ///  cout<<a[k-1]<<endl<<b[m-l]<<endl;
    if(a[k-1]<b[m-l])
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
