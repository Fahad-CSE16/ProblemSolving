#include<bits/stdc++.h>
using namespace std;
int main()
{
   char x[100];
   cin>>x;
   int l=strlen(x);
   char y[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   int i,j=0,cnt=0;
   while(y[j]!='\0'){
        for(i=0;i<l;i++){
            if(x[i]==y[j]){
                cnt++;
                break;
            }

        }
        j++;
   }
   if(cnt%2==0)
    cout<<"CHAT WITH HER!\n";
   else if(cnt%2==1)
   cout<<"IGNORE HIM!\n";
    return 0;
}
