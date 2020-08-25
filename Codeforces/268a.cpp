#include<bits/stdc++.h>
using namespace std;
struct fahad{
    int home,guest;
};
int main()
{
    int n,cnt=0;
    cin>>n;
    fahad f[n];
    for(int i=1;i<=n;i++){
        cin>>f[i].home>>f[i].guest;
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(i!=j){
            if(f[i].home==f[j].guest)
                cnt++;}
        }
    }
    cout<<cnt<<endl;
    return 0;
}
