#include <bits/stdc++.h>

#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9
#define         ll          long long
#define         ST          stack
#define         V           vector
#define         Q           queue
#define         S           set
#define         M           map

using namespace std;

///ISNNJB

int main()
{
    int n,ara[55],b[55],i,j,ctn=0;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>ara[i];
    for (i=1; i<=n; i++)
        b[i]=ara[i];
    sort(ara+1, ara+n+1);
    for (i=1; i<=n; i++)
    {
        if (ara[i]!=b[i])
            ctn++;
    }
    if(ctn<=2)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
