#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    int a=strlen(s);
    for(int i=0; i<=a; i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0; i<a; i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
        {
            cout<<"."<<s[i];
        }
    }
    cout<<endl;
    return 0;
}

