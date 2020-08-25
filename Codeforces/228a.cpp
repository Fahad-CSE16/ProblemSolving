#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x[4];
    int cnt=0;
    for(int i=0; i<4; i++)
    {
        cin>>x[i];
    }
        sort(x,x+4);
    for(int i=0; i<3; i++)
    {
        if(x[i]==x[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
