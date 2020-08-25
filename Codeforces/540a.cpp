#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,cn=0;
    cin>>n;
    char x[n+1];
    char y[n+1];
    cin>>x>>y;
    for(int i=0;i<n;i++){
        if(x[i]<=y[i]){
            if((y[i]-x[i])<=5)
                cnt+=(y[i]-x[i]);
            else
            {//cn+=(y[i]-x[i]);
               cn+=(10-(y[i]-x[i]));
            }

        }
        else
        {
            if((x[i]-y[i])<=5)
                cnt+=x[i]-y[i];
            else{
                cn+=10-(x[i]-y[i]);
             //   cn-=((x[i]-y[i])-4);
               /// cn+=4;
            }

        }
    }
    cout<<cnt+cn<<endl;
    return 0;
}
