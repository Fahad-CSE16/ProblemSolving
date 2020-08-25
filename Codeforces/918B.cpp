#include<bits/stdc++.h>
using namespace std;
struct st {
    string s;
    string k;
};
struct scnd{
    string f;
    string g;
};
int main()
{
    int n,m,t;
    cin>>n>>m;
    st v1[n];
    scnd v2[m];
    for( int i=0;i<n;i++){
        cin>>v1[i].s>>v1[i].k;
        v1[i].k=v1[i].k+";";
    }
     for( int i=0;i<m;i++){
        cin>>v2[i].f>>v2[i].g;
    }
    for(int i=0;i<m;i++){
            cout<<v2[i].f<<" "<<v2[i].g<<" #";
        for(int j=0;j<n;j++){
          if(  v2[i].g==v1[j].k)
          cout<<v1[j].s<<endl;
        }
    }
    cout<<endl;
    return 0;
}
