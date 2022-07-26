#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,ara[111],i,j;
    double total=0;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>ara[i];
    for (i=1; i<=n; i++)
    {
        total+=(1/(ara[i]*1.0));
    }
    total=1/total;
    cout<<total<<endl;

    return 0;
}
