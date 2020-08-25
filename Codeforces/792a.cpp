#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    long long mn=2000000001;
    int cnt=1;
    for(int i=0; i<n-1; i++)
    {
        if(ar[i+1]-ar[i]==mn)
        {
            cnt++;
        }
        else if(ar[i+1]-ar[i]<mn)
        {
            long long c=ar[i+1]-ar[i];
            mn=min(mn,c);
            cnt=1;
        }
    }
    cout<<mn<<" "<<cnt<<endl;
    return 0;
}

