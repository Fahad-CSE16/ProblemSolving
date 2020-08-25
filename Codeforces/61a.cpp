#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[101];
    char y[101];
    char z[101];
    cin>>x>>y;
    int l=strlen(x);
    for(int i=0;i<l;i++){
        if(x[i]==y[i])
            z[i]='0';
        else
            z[i]='1';
    }
    for(int i=0;i<l;i++)
    cout<<z[i];
    cout<<endl;
    return 0;
}
