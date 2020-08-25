#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    cin>>n;
    bool bol=true;
    int a,b,c;
    a=1;
    b=2;
    c=3;
    while(n--)
    {
        cin>>f;
        if(f==a)
        {
            bol=true;
            swap(b,c);
        }
        else if(f==b)
        {
            bol=true;
            swap(a,c);

        }
        else
        {
            bol=false;
            break;
        }
    }
    if(bol)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
