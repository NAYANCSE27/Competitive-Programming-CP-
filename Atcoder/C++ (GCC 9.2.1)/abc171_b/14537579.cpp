#include <bits/stdc++.h>

#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9
#define         lli         long long int

using namespace std;

///ISNNJB

/**int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};*/

int main() {
    /***freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli a,b,c,d,t,n,m,k,x,y,q,ctn,l1,l2,ara[1100],total=0;
    cin>>n>>k;
    for (int i=1; i<=n;  i++)
        cin>>ara[i];
    sort(ara+1, ara+n+1);

    for (int i=1; i<=k; i++)
        total+=ara[i];
    cout<<total<<endl;

    return 0;
}
