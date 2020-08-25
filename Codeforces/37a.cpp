#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mxx=1,cnt=1;
    cin>>n;
    int a[n];
    set<int>s;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
            cnt=1;
            for(int j=i+1;j<n;j++){
                 if(a[i]==a[j])
                 {
                     cnt++;
                     mxx=max(cnt,mxx);
                 }

            }

    }
    cout<<mxx<<" "<<s.size()<<endl;

    return 0;
}
