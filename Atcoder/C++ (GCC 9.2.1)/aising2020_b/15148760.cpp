#include <bits/stdc++.h>

/// Constant:
#define         eps         10e-9
#define         pi          2*acos(0)
#define         P1          1e9+7
#define         P2          1e9+9

#define         lli         long long int
#define         PB          push_back
#define         pb          pop_back
#define         mk          make_pair
#define         I           insert
/// Loop:
#define         f1(a,b)     for (int i=a; i<=b; i++)
#define         f2(a,b)     for (int j=a; j<=b; j++)
#define         f-1(a,b)     for (int i=b; i>=a; i--)
#define         f-2(a,b)     for (int j=b; j>=a; j--)
///Print:
#define         pY          cout<<"YES"<<endl;
#define         pN          cout<<"NO"<<endl;
#define         py          cout<<"Yes"<<endl;
#define         pn          cout<<"No"<<endl;

using namespace std;
///ISNNJB

/// Functions:
//lli bigmod(lli b, lli p, lli m){if(p==0)return 1;if(p%2!=0) return b%m*fun(b,p-1,m)%m;if(p%2==0){ lli res=fun(b,p/2,m);return (res%m*res%m)%m;}}
//lli mod_inverse(lli a, lli mod) { return bigmod(a,mod-2,mod); }
//lli LCM(lli a, lli b){ return a*b/ __gcd(a,b);}

///Global Variable:
int ara[400005],brr[400004];

/**int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};*/

int main() {

    /**freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli a,b,c,d,k,t,n,m,x,y,q,ctn=0,l1,l2,total=0,l,r;

    cin>>n;
    f1(1,n)
    cin>>ara[i];

    f1(1,n) {
        if(i%2!=0&&ara[i]%2!=0)
            ctn++;
    }
    cout<<ctn<<endl;

    return 0;
}


