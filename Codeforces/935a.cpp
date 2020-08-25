#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    if(n==1||n==0)
        cout<<n<<endl;
    else
    {
        for(int i=1;i<=n/2;i++){
            if((n-i)%i==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
