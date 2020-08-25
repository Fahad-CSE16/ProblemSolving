#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j,cnt=0;
    for(i=n,j=m;i<=j;i=i*3,j=j*2){
               cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
