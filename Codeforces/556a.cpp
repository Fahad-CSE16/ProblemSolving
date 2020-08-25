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
        if(x[i]=='1')
            a++;
        else
            d++;
    }
    if(a>=d)
        cout<<a-d<<endl;
    else
        cout<<d-a<<endl;

    return 0;
}
