#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    long long int i,j;
    for(i=1;;i++){
            j=i*a;
        if(j%10==0||j%10==b){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
