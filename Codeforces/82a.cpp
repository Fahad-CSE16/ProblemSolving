#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int m=n;
    int i=1;
    while(n>(i*5))
    {
        n=n-(5*i);
        i=i*2;
    }
    n=n-1;
    n=n/i;
    ///cout<<n<<endl;
    string nam[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout<<nam[n]<<endl;
    return 0;

}
