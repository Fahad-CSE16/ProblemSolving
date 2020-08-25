#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long f,cnt=0;
    cin>>n;
  long long int a[n];
  for(int i=0; i<n; i++)
    {
        cin>>f;
        cnt+=f;
    }
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
   /// cnt2=0;
 long long  int  cnt2=a[n-2]+a[n-1];
   ///cout<<cnt2<<" "<<cnt<<endl;
    if(cnt2>=cnt)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
