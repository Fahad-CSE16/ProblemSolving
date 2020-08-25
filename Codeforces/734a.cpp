#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,d=0;
    cin>>n;
    char x[n+1];
    cin>>x;
    int l=strlen(x);
    for(int i=0;i<l;i++){
        if(x[i]=='A')
            a++;
        else
            d++;
        if(a>(l/2)||d>(l/2))
            break;
    }
    if(a>d)
        cout<<"Anton\n";
    else if( d>a)
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
    return 0;
}
