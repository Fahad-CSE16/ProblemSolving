#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string y;
    cin>>s>>y;
    reverse(y.begin(),y.end());
    if(s==y)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
