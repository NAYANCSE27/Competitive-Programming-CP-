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

    lli t,a,b,m,n,x,total,ara[7],i;

    for (int i=1; i<=5; i++)
        cin>>ara[i];
    for ( i=1; i<=5; i++){
        if(ara[i]==0){
            x=i;
            break;
        }
    }
    cout<<x<<endl;

    return 0;
}
