#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,a,f,e,h;
    cin>>n>>a;
    h=ceil(n/2.0);
    ///cout<<h<<endl;
    e=a-h;
    if(a<=h){
        f=a+(a-1);
    }
    else
        f=e+e;
        cout<<f<<endl;
    return 0;
}
