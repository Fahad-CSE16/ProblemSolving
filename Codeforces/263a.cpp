#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5],a;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }
      for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++){
            if(arr[i][j]==1)
            {
                i++;j++;

                if(i<=3&&j<=3)
                    a=3-i+3-j;
                else if(i>3&&j>3)
                    a=i-3+j-3;
                else if(i<=3&&j>3)
                    a=3-i+j-3;
                else if(i>3&&j<=3)
                        a=i-3+3-j;
                cout<<a<<endl;
                return 0;

            }

            }

    }
    cout<<a<<endl;
    return 0;

}
/*
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
*/
