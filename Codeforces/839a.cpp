#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int cnt=0,done =0;
    for(int i=0; i< n; i++)
    {
        cin>>arr[i];
    }
    if(n*8<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0; i< n; i++)
    {
        cnt+=arr[i];
        if(cnt>=8)
        {
            done+=8;
            cnt-=8;
        }
        else
        {
            done+=cnt;
            cnt=0;
        }
        if(done>=k)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
if(done<k)
            cout<<-1<<endl;
    return 0;
}
