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

    lli t,a,b,n,x,total,ara[111],i;
    bool flag=true;
    memset(ara, 0, sizeof(ara));
    cin>>x>>n;

    for (i=1; i<=n; i++) {
        cin>>a;
        ara[a]=1;
    }
//
//    for (int i=1; i<=16; i++)
//        cout<<ara[i]<<" ";
//    cout<<endl;

    if(n==0)
        cout<<x<<endl;
    else {
        for (i=x; i>=1; i--) {
            if(ara[i]==0) {
                    ///cout<<ara[i]<<endl;
                a=i;
                flag=false;
                break;
            }
        }
        if(flag==true)
            a=i;
        for (i=x; i<=110; i++) {
            if(ara[i]==0) {
                b=i;
                break;
            }
        }

        ///cout<<a<<"\t"<<b<<endl;
        total=abs(x-a);
        t=abs(x-b);

        if(total<=t)
            cout<<a<<endl;
        else
            cout<<b<<endl;
    }

    return 0;
}
