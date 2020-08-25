#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            total+=j;
        }
        if(total==n){
            cout<<i<<endl;
            break;}
        else if(total>n)
        {
            cout<<i-1<<endl;
            break;
        }
    }
    return 0;
}

