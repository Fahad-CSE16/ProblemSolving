#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n][101];
    for(int i=0;i<n;i++){
    cin>>s[i];
    int a;
    a=strlen(s[i]);
    if(a<=10)
        cout<<s[i]<<endl;
    else
    cout<<s[i][0]<<a-2<<s[i][a-1]<<endl;}
    return 0;
}
