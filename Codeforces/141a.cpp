#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[101];
    char y[101];
    char z[101];
    char sum[202];
    cin>>x>>y>>z;
    strcat(x,y);
    int cnt=0;
    int ls=strlen(x);
    int zs=strlen(z);
    sort(x,x+ls);
    sort(z,z+zs);
    if(ls!=zs)
        cout<<"NO\n";
    else{
        for(int i=0;i<ls;i++){
                if(x[i]==z[i])
                   cnt++;
        }
        if(cnt!=ls)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
