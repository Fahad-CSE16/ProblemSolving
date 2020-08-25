#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a,b,as=0,bs=0;
    while(n--){
        cin>>a>>b;
        if(a>b)
            as++;
        else if(b>a)
            bs++;
    }
    if(as<bs)
        cout<<"Chris\n";
    else if(bs<as)
        cout<<"Mishka\n";
    else
        cout<<"Friendship is magic!^^\n";
    return 0;
}

