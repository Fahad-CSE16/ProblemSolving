#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n-2; i++)
    {
        if(a[i]%2==0)
        {
            if(a[i+1]%2==0)
            {
                if(a[i+2]%2==1)
                {
                    cout<<i+2<<endl;
                    break;
                }

            }
            else
            {
                if(a[i+2]%2==0)
                {
                    cout<<i+1<<endl;
                    break;
                }
                else
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else
        {
            if(a[i+1]%2==0)
            {
                if(a[i+2]%2==1)
                {

                }
                else
                {
                    cout<<i<<endl;
                    break;
                }
            }
            else
            {
                if(a[i+2]%2==0)
                {
                    cout<<i+2<<endl;
                    break;
                }
            }

        }

    }
    return 0;
}
