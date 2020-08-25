#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt;
    cin>>n;
    long long int t[n];
    for(int i=0; i<n; i++)
    {
        cin>>t[i];
        bool c=true;
        long long sqr=sqrt(t[i]);long long limit=sqrt(sqr);
        if(sqr<2)
            c=false;
        else if(sqr==2)
            c= true;

       else if(sqr%2==0)
            c= false;
        for(int j=3; j<=limit; j+=2)
        {
            if(sqr%j==0)
                c= false;
        }
        if(sqr*sqr==t[i]&&c==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
