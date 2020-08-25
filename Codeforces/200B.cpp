#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int temp = 0;
    double sum = 0;
    for(int k = 0; k < n; k++)
    {
        scanf("%d", &temp);
        sum +=temp;
    }
    printf("%.12lf\n", sum / n);
    return 0;
}
