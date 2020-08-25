#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    int a=0;
    int b=0;
    int l=strlen(s);
    for(int i=0; i<l; i++)
        {
            if(s[i]=='0')
                {a++;
            b=0;}
            else if(s[i]=='1'){
                b++;
                a=0;
            }
             if(a==7||b==7){
            cout<<"YES\n";
            break;}
        }
       if(a<7&&b<7)
        cout<<"NO\n";
    return 0;
}
