#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,T;
    cin>>n;
    int i=0;
    int j=1;
    int feb=i+j;
    for(int k=1;k<=n;k++){
        if(k==(i+j)){
            cout<<"O";
            i=j;
            j=k;
        }
        else
            cout<<"o";
    }
    cout<<endl;

    return 0;}
