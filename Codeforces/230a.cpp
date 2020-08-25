#include<bits/stdc++.h>
using namespace std;
struct ad{
    int a,b;
};
int main()
{
    int in,n;
    cin>>in>>n;
    ad v[n];
    bool c=true;
    for(int i=0;i<n;i++){
        cin>>v[i].a>>v[i].b;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(v[i].a>v[j].a){
                swap(v[i].a,v[j].a);
                swap(v[i].b,v[j].b);

            }
        }
    }
    for(int i=0;i<n;i++){
            ///cout<<v[i].a<<" ";
        if(v[i].a>=in){
            c=false;
            break;
        }
        else
            in+=v[i].b;
    }
    if(c)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
