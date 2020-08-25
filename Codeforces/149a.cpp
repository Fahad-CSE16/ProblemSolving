#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a[12];
    cin>>k;
    for(int i=0; i<12; i++)
        cin>>a[i];
    sort(a,a+12);
    int cnt=0,total=0;
    if(k==0)
        cout<<0<<endl;
    else
    {
        for(int i=11; i>=0; i--)
        {
            total+=a[i];
            if(total>=k)
            {
                cnt++;
                break;

            }
            cnt++;
        }
        ///cout<<total<<" "<<cnt<<endl;
        if(cnt>=12&&total<k)
            cout<<-1<<endl;

        else
            cout<<cnt<<endl;
    }
    return 0;
}

