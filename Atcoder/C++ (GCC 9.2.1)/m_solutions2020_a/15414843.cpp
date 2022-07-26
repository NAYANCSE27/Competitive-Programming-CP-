#include <bits/stdc++.h>

/// Constant:
#define         eps         0.000000001
#define         pi          2*acos(0)
#define         P1          1000000007
#define         P2          1000000009

#define         fast        ios_base::sync_with_stdio(false);   cin.tie(NULL);
#define         lli         long long int
#define         PB          push_back
#define         pb          pop_back
#define         mp          make_pair
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

///Global Variable:
int ara[200005],brr[200005];

/// Functions:
//lli bigmod(lli b, lli p, lli m){if(p==0)return 1;if(p%2!=0) return b%m*fun(b,p-1,m)%m;if(p%2==0){ lli res=fun(b,p/2,m);return (res%m*res%m)%m;}}
//lli mod_inverse(lli a, lli mod) { return bigmod(a,mod-2,mod); }
//lli LCM(lli a, lli b) { return a*b/ __gcd(a,b); }
//vector<int>divisors[1000005]; void divisor(int n) { for (int i=1; i<=n; i++)    for (int j=i; j<=n; j+=i)   divisors[j].PB(i);}

/**int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};*/

int main() {

    /**freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    fast;

    lli a,b,c,d,t,k,n,m,x,y,q,ctn=0,l1,l2,total=0,l,r;
    string s;

    cin>>n;
    if (n<=599)
        cout<<8<<endl;
    else if(n<=799)
        cout<<7<<endl;
    else if(n<=999)
        cout<<6<<endl;
    else if(n<=1199)
        cout<<5<<endl;
    else if(n<=1399)
        cout<<4<<endl;
    else if(n<=1599)
        cout<<3<<endl;
    else if(n<=1799)
        cout<<2<<endl;
    else
        cout<<1<<endl;

    return 0;
}
