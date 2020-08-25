#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[101],s2[101];
    cin>>s1>>s2;
    int a=strlen(s1);
    int b=strlen(s2);
    for(int i=0;i<a;i++){if(isupper(s1[i]))
        s1[i]=tolower(s1[i]);}
         for(int i=0;i<a;i++){if(isupper(s2[i]))
        s2[i]=tolower(s2[i]);}



    cout<<strcmp(s1,s2);

    return 0;
}
