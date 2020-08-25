#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[101];
    cin>>x;
    int l=strlen(x);
    bool c=false;
    for(int i=0; i<l; i++)
    {
        if(x[i]=='H'||x[i]=='Q'||x[i]=='9')
        {
            c=true;
        }
    }
    if(c)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
