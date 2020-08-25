#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,x=1,y=1;
cin>>n;
long long int a[n];
for(int i=1;i<=n;i++){
    cin>>a[i];
}
for(int i=1;i<n;i++){
    if(a[i]<=a[i+1]){
        x++;
        y=max(x,y);
    }
    else
        x=1;
       /// cout<<"Y="<<y<<" x=" <<x<<endl;
}
cout<<max(y,x)<<endl;
return 0;
}
