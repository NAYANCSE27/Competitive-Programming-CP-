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

    lli t,a,b,m,n,x,total;
    cin>>a>>b;

    if(b%2!=0)
        cout<<"No"<<endl;
    else {
        m=2*a;
        n=4*a;
        if(b>=m&&b<=n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
