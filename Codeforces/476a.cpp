#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int cnt=ceil(n/2.0);
   // cout<<cnt<<endl;
    while(n>=cnt){
        if(cnt%x==0){
            cout<<cnt<<endl;
            break;}
        else
            cnt++;
    }
    if(cnt>n)
        cout<<-1<<endl;

    return 0;
}
