#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,o=0;
   cin>>n;
   long long a[n],cnt=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    cnt+=a[i];
    if(a[i]%2==1)
        o++;
   }
   sort(a,a+n);
   if(o%2==1){
    for(int i=0;i<n;i++ ){
        if(a[i]%2==1){
            cnt-=a[i];
            break;
        }
    }
   }
   cout<<cnt<<endl;
    return 0;
}
