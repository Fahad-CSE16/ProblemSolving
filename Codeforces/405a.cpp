#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[101];
    cin>>x;
    int l=strlen(x);
    int i,j,ls=0,hs=0;
    for(i=0;i<l;i++){
        if(islower(x[i]))
            ls++;
        else
            hs++;
    }
    if(ls>hs||ls==hs){
        for(i=0;i<l;i++){
            x[i]=tolower(x[i]);
            cout<<x[i];
        }
    }
    else
        for(i=0;i<l;i++){
            x[i]=toupper(x[i]);
            cout<<x[i];
        }
    cout<<endl;
    return 0;
}
