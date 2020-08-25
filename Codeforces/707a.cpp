#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int k=n*m;
    string s;
    bool c=true;
    while(k--){
        cin>>s;
        if(s=="C"||s=="Y"||s=="M")
        {
            c=false;
        }
    }
    if(c)
        cout<<"#Black&White\n";
    else
        cout<<"#Color\n";
    return 0;
}
