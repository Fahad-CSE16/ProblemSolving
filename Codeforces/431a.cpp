#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,cnt=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='1')
            cnt+=a;

        else if(s[i]=='2'){
            cnt+=b;
        }
        else if(s[i]=='3'){
            cnt+=c;
        }
        else {
            cnt+=d;
        }}
        cout<<cnt<<endl;
    return 0;
}
