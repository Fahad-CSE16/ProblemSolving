#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,m=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(a[0]==-1)
        m++;
    else
        p=p+a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]==-1)
            {
                if(p>0)
                    p--;
                else
                    m++;
            }
            else
                p=p+a[i];
        }


    cout<<m<<endl;


    return 0;
}
