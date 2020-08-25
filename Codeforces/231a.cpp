#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cin>>a[i][j];
        }
    }
    int cnt[n];
    for(int i=1; i<=n; i++)
    {
        cnt[i]=0;
        for(int j=1; j<=3; j++)
        {
            if(a[i][j]>=1)
                cnt[i]=cnt[i]+1;
        }
    }
    int countt=0;
    for(int i=1; i<=n; i++)
    {
        if(cnt[i]>=2)
            countt++;
    }
    cout<<countt<<endl;
    return 0;
}
