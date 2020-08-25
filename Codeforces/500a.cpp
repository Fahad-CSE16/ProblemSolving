#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<n;i++)
        cin>>a[i];
    bool c=false;
    int i=1;
    while(i<n){
        if(i+a[i]==k)
        {
            c=true;
            break;
        }
        i=i+a[i];
    }
    if(c)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
