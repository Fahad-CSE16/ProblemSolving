#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,k;
    cin>>m>>k;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    int mn=101;
     for(int i=0;i<m;i++){
        if(k%a[i]==0){
            mn=min(mn,k/a[i]);
        }
     }
     cout<<mn<<endl;
    return 0;
}
