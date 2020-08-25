#include<bits/stdc++.h>
using namespace std;
int recursion(int x,int y,int z){
    if(x==0)
        cout<<0<<endl;
   else if((2*x)<=y&&(4*x)<=z)
        cout<<x+2*x+4*x<<endl;
    else
        recursion(x-1,y,z);
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    recursion(x,y,z);
    return 0;
}
