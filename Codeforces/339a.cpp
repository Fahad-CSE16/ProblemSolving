#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
   /// string x;
    char x[100];
    cin>>x;
    int t;
    t=strlen(x);
    for(int i=0;i<t-2;i=i+2){
        for(int j=i+2;j<t;j=j+2){
            if(x[i]>x[j])
                swap(x[i],x[j]);
        }
    }
    cout<<x<<endl;
    return 0;
}
