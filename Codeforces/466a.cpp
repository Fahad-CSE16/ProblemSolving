#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if((m*a)<=b)
    {
        cout <<a*n << endl;
    }
    else
    {
        cout << min(((n/m)*b) + (n%m)*a, ((n/m)*b) + b) << endl;
    }
    return 0;
}
