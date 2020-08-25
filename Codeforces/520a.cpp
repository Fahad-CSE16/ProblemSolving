#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    char x[n+1];
    string y="qwertyuiopasdfghjklzxcvbnm";
    cin>>x;
    int i,j,k,l=0,cnt=0;
    if(n<26)
        cout<<"NO\n";
    else{
    for(i=0;i<n;i++){
        x[i]=tolower(x[i]);
    }
    ///cout<<x<<endl;
    while(y[l]!='\0'){
    for(i=0;i<n;i++){
        if(x[i]==y[l]){
            cnt++;
                break;
        }
    }
    l++;
    }
   /// cout<<cnt<<endl;
    if(cnt==26)
        cout<<"YES\n";
    else
        cout<<"NO\n";}
    return 0;
}
///thequickbrownfoxjumpsoverthelazydog
