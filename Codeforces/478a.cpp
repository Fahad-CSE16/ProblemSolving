#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],cnt=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        cnt+=a[i];
    }
    if(cnt==0)
        cout<<-1<<endl;

    else if(cnt%5==0)
        cout<<cnt/5<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
