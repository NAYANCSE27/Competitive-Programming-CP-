#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,i,j,ara[111],ctn,d;
    cin>>n>>x;
    for(i=1; i<=n; i++)
        cin>>ara[i];
    ctn=1;
    d=0;
    for (i=2; i<=n+1; i++)
    {
        j=d+ara[i-1];
        d=j;
        ctn++;
        if (d>=x)
        {
            if(d>x)
                ctn--;
            break;
        }
    }
    cout<<ctn<<endl;

    return 0;
}
