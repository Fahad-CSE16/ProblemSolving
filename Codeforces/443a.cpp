#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001];
    gets(s);
    set<char>v;
    set<char>::iterator it;
    int l=strlen(s);
    for(int i=1;i<l-1;i=i+3){
        v.insert(s[i]);
    }
    ///cout<<l<<" "<<s;
    cout<<v.size();
    return 0;
}

