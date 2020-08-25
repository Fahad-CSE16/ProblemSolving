#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long fst,fav,dif;
    cin>>fst>>fav>>dif;
    if(dif==0)
    {
        if(fav==fst)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else if(dif>0)
    {
        if((fav-fst)%dif==0&&fav>=fst)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        dif=-dif;
        if((fav-fst)%dif==0&&fav<=fst)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
