#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<ceil((n*n)/2.0)<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){
                if(j%2==1)
                    cout<<"C";
                else
                    cout<<".";
            }
            else{
                if(j%2==0)
                    cout<<"C";
                else
                    cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}
