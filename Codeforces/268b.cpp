#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=n-1;i>=2;i--){
        for(int j=i;j>=2;j--){
            cnt+=j;
        }
        cnt++;
    }
    if(n>1)
    cout<<cnt+n+1<<endl;
    else
    cout<<cnt+n<<endl;


    return 0;
}
