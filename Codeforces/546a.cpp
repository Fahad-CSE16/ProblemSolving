#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int dam,ache,kinbo,total=0,lagbe;
    cin>>dam>>ache>>kinbo;
    for(int i=0;i<=kinbo;i++){
        total=total+(i*dam);
    }
    if(total>ache){
    lagbe = total-ache;}
    else
        lagbe =0;
    cout<<lagbe<<endl;
    return 0;
}

