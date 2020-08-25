#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(i%4==0){
                if(j==1)
                    cout<<"#";
                else
                    cout<<".";
            }
            else if(i%2==0){
                if(j==x)
                    cout<<"#";
                else
                    cout<<".";
            }
            else
                cout<<"#";

        }
        cout<<endl;
    }

    return 0;
}
