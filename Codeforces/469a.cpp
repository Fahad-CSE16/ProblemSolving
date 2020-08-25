#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    int i,n,x,lvl;
    bool c=true;
    cin>>lvl;
    int fst,scnd;
    cin>>fst;
    for(i=1; i<=fst; i++)
    {
        cin>>x;
        s.insert(x);
    }
    cin>>scnd;
    for(i=1; i<=scnd; i++)
    {
        cin>>x;
        s.insert(x);
    }
 ///   for(it=s.begin(); it!=s.end(); it++){
  ///      cout<<*it<<" ";}
    it=s.begin();
  for(int i=1;i<=lvl;i++){
    if((*it)!=i){
        c=false;
        break;
    }
    *it++;
  }
    if(c)
        cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";

    return 0;
}
