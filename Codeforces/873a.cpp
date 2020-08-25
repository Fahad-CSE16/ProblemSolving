#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total,npu,utime,f,g,cnt=0;
    cin>>total>>npu>>utime;
    int a[total];
    for(int i=0;i<total;i++){
        cin>>a[i];
    }
    sort(a,a+total);
    for(int i=0;i<total-npu;i++){
        cnt+=a[i];
    }
    cnt+=(npu*utime);
    cout<<cnt<<endl;
    return 0;
}
