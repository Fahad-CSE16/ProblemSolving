#include<bits/stdc++.h>
using namespace std;
long long int recursion(long long int x){
    long long i;
     for(i=1;;i=i*2){
        if(i>x){
            i/=2;
            break;
        }
    }
    if(i==0)
        return 0;
    else
        return 1+recursion(x-i);

}
int main()
{
  long long int x;
    cin>>x;
    cout<<recursion(x)<<endl;
    return 0;
}
///  536870911=29
