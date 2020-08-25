#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char x[101];
    int i,l;
    cin>>x;
    bool change =true;
    l=strlen(x);
    if(islower(x[0]))
    {
        for(i=1; i<l; i++)
        {
            if(islower(x[i]))
            {
                change=false;
                break;
            }
        }
    }
    else if(isupper(x[0]))
    {
        for(i=1; i<l; i++)
        {
            if(islower(x[i]))
            {
                change=false;
                break;
            }
        }
    }
    if(change)
    {
        for(int i=0; i<l; i++)
        {
            if(islower(x[i]))
                x[i]=toupper(x[i]);
            else
                x[i]=tolower(x[i]);
        }

    }
    cout<<x<<endl;

    return 0 ;
}
