#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string st;
    int x=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>st;
        if(st=="X++")
            x++;
        else if(st=="X--")
            x--;
        else if(st=="--X")
            --x;
        else if(st=="++X")
            ++x;
    }
    cout<<x<<endl;
    return 0;
}
