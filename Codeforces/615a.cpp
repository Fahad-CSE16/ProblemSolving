
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,v;
    set<int>s;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        for(int j=0; j<t; j++)
        {
            cin>>v;
            s.insert(v);
        }
    }
    bool c=true;
    set<int>::iterator it;
    it=s.begin();
    for(int k=1; k<=m; k++)
    {
        ///cout<<*it<<endl;
        if(*it!=k)
        {
            c=false;
            break;
        }
       it++;

    }

    if(c)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
