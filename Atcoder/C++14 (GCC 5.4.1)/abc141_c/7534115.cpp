#include <bits/stdc++.h>
using namespace std;

int ara[111111];

int main()
{
    int n,k,q,i,j,l;
    cin>>n>>k>>q;
    for (i=1; i<=n; i++)
    {
        ara[i]=k;
    }
    for (i=1; i<=q; i++)
    {
        cin>>l;
        ara[l]++;
    }
    for (i=1; i<=n; i++)
    {
        ara[i]=ara[i]-q;
    }

    for (i=1; i<=n; i++)
    {
        if (ara[i]<=0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }

    return 0;
}

