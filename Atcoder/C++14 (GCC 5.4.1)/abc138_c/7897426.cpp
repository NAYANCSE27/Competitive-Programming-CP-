#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    double mid,ans,ara[55];
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>ara[i];
    sort(ara+1, ara+n+1);
    mid=(ara[1]+ara[2])/2.0;
    ara[2]=mid;
    for (i=2; i<n; i++)
    {
        ara[i+1]=(ara[i]+ara[i+1])/2.0;
        mid=ara[i+1];
    }
    cout << mid<<endl;

    return 0;
}
