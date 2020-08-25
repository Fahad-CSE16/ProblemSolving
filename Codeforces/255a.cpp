#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],g;
    int b[3];
    b[1]=0;
    b[2]=0;
    b[3]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>g;
        if(i%3==1)
            b[1]+=g;
        else if(i%3==2)
            b[2]+=g;
        else if(i%3==0)
            b[3]+=g;
    }
    int mx=max(b[1],max(b[2],b[3]));
    if(mx==b[1])
        cout<<"chest\n";
    else if(mx==b[2])
        cout<<"biceps\n";
    else if(mx==b[3])
        cout<<"back\n";

    return 0;

}
