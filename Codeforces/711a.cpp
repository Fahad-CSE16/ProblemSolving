#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    bool c=false;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
     for(int i=0;i<n;i++){
       for(int j=0;j<5;j=j+3){
        if(s[i][j]=='O'&&s[i][j+1]=='O'){
            c=true;
            s[i][j]='+';
            s[i][j+1]='+';
            i=n;
            break;

        }
       }
    }
    if(c)
    {
        cout<<"YES\n";for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    }
    else
        cout<<"NO\n";

    return 0;
}
