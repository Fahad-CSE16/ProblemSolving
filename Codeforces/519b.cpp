#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,as=0,bs=0,cs=0;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(int i=0;i<n;i++){
        cin>>a[i];
        as+=a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
        bs+=b[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>c[i];
        cs+=c[i];
    }
    cout<<as-bs<<endl<<bs-cs<<endl;
    return 0;
}
