#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mxi=1,mni=1;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int mn=a[1];
    int mx=a[1];
    for(int i=1;i<=n;i++){
        if(a[i]>mx){
            mx=a[i];
            mxi=i;
        }
        else if(a[i]<=mn){
            mn=a[i];
            mni=i;
        }
    }
  /// cout<<mxi<<" "<<mni<<endl;
    if(mni<mxi)
        cout<<(mxi-1)+(n-mni)-1<<endl;
    else
        cout<<(mxi-1)+(n-mni)<<endl;
    return 0;
}
