#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,a1,b1,a2,b2;
    cin>>s>>a1>>b1>>a2>>b2;
    int x=s*a1+2*a2;
    int y=s*b1+2*b2;
    if(x<y)
        cout<<"First\n";
    else if(y<x)
        cout<<"Second\n";
    else
        cout<<"Friendship\n";
    return 0;
}
