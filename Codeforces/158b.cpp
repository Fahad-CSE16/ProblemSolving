#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1,a2,a3,a4;
    a1=0;
    a2=0;
    a3=0;
    a4=0;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            a1++;
        else if(a[i]==2)
            a2++;
        else if(a[i]==3)
            a3++;
        else if(a[i]==4)
            a4++;
    }
   /// cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<endl;
    int c=0;
    c=c+a4;
    c=c+(a2/2);
    a2=a2%2;
    ///cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" \n";
    if(a1<=a3)
    {
        c=c+a3;
        a1=0;
    }
    else
    {
        c=c+a3;
        a1=a1-a3;
    }
   /// cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" \n";
    if((a1*2)<=a2)
    {
        c=c+a2;
        a1=0;
    }
    else
    {
        c=c+a2;
        a1=a1-(2*a2);
    }
    ///cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" \n";
    a1=ceil(a1/4.0);
    c+=a1;
    cout<<c<<endl;

    return 0;
}
