#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int h=min(n,m);
    if(h%2==0)
        cout<<"Malvika\n";
    else
        cout<<"Akshat\n";
    return 0;
}
