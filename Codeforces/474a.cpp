#include<bits/stdc++.h>
#include <cstring>
using namespace std;


char keyboard[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
    char s;
    cin>>s;

    char input[120];
    cin>>input;

    if(s == 'L')
    {
        for(int i = 0; i < strlen(input); i++)
        {
            for(int j = 0; j < strlen(keyboard); j++)
            {
                if(input[i] == keyboard[j])
                {
                    cout<<keyboard[j + 1];
                    break;
                }
            }
        }
        cout<<endl;
    }
    else if(s=='R')
    {
        for(int i = 0; i < strlen(input); i++)
        {
            for(int j = 0; j < strlen(keyboard); j++)
            {
                if(input[i] == keyboard[j])
                {
                   cout<<keyboard[j - 1];
                    break;
                }
            }
        }
       cout<<endl;
    }
    return 0;
}
