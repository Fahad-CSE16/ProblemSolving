#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int gcd(int x,int y)
{
    return(y!=0)?gcd(y,x%y):x;
}
int super(int a,int b,int c)
{

    if(c==0)
        return cnt;
    else
    {
        c=c-gcd(a,c);
        cnt++;
        super(b,a,c);
    }
}
int main()
    {
        int a,b,c;
        cin>>a>>b>>c;
        int result;
        result=super(a,b,c);
        if(cnt%2==1)
            cout<<"0\n";
        else
            cout<<"1\n";
        return 0;
    }
