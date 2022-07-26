#include <bits/stdc++.h>

#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9
#define         lli         long long int

using namespace std;

///ISNNJB
int ara[100010],brr[100010];

/**int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};*/

int main() {
    /***freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli a,b,c,d,t,n,m,x,y,q,ctn,l1,l2,total=0;
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>ara[i];
        brr[ara[i]]++;
    }

    for (int i=1; i<=n; i++)
        total+=ara[i];
    cin>>q;

    for (int i=1; i<=q; i++) {
        cin>>a>>b;
        m=brr[a];
        if(a<b) {
            if(m==0)
                cout<<total<<endl;
            else {
                x=m*b;
                y=m*a;
                total-=y;
                total+=x;
                brr[b]+=brr[a];
                brr[a]=0;
                cout<<total<<endl;
            }
        }

        else {
            if(m==0)
                cout<<total<<endl;
            else {
                x=m*b;
                y=m*a;
                total-=y;
                total+=x;
                brr[b]+=brr[a];
                brr[a]=0;
                cout<<total<<endl;
            }
        }
    }

    return 0;
}
