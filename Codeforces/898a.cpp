#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
    cin>>n;
   int f=n%10;
   if(f<=5)
    n=n-(n%10);
   else
    n=n+(10-f);
   cout<<n<<endl;
    return 0;
}
