#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int cnt=0;
    int a;
    while(n--){
        cin>>a;
        if(a>x)
            cnt+=2;
        else
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
