#include<iostream>
using namespace std;
void sortt(int a[],int n)
{
    for(int i=1; i<n; i++)

        for(int j=i+1; j<=n; j++)
        {
            if(a[i]<a[j])
            {
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sortt(a,n);
    if(a[k]==0)
    {
        int countt=0;
        for(int j=1; j<=n; j++)
        {
            if(a[j]>=1)countt=countt+1;
        }
        cout<<countt<<endl;
    }
    else
    {
        for(int i=n; i>=1; i--)
        {
            if(a[i]==a[k])
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
