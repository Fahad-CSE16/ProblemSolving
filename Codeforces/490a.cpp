#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    int m(0),n(0),o(0);
    int s1[5000];
    int s2[5000];
    int s3[5000];
    for(int i=1; i<=t; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            m++;
            s1[m]=i;
        }
        else if(a[i]==2)
        {
            n++;
            s2[n]=i;
        }
        else if(a[i]==3)
        {
            o++;
            s3[o]=i;
        }
    }
   /// cout<<m<<" "<<n<<" "<<o<<endl;
   /* for(int i=1;i<=m;i++){
        cout<<s1[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<s2[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=o;i++){
        cout<<s3[i]<<" ";
    }
    cout<<endl;*/
    int k=min(m,min(n,o));
    cout<<k<<endl;
    for(int i=1;i<=k;i++){
        cout<<s1[i]<<" "<<s2[i]<<" "<<s3[i]<<endl;
    }
    return 0;
}

