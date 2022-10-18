#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=2e5+6;
const int P1=1000000007;


void testcases() {
    lli a,b,c,d;
    vector<lli>da,db;
    cin>>a>>b>>c>>d;

    for(lli i=1; i*i<=a; i++) {
        if(a%i==0) {
            da.PB(i);
            da.PB(a/i);
        }
    }

    for(lli i=1; i*i<=b; i++) {
        if(b%i==0) {
            db.PB(i);
            db.PB(b/i);
        }
    }

    lli ab=a*b;
    lli x=-1,y=-1;
    for(auto &i:da) {
        for(auto &j:db) {
            lli xa=i*b/j;
            lli yb=j*a/i;
            lli xx=xa*(c/xa);
            lli yy=yb*(d/yb);
            if(xx>a&&xx<=c&&yy>b&&yy<=d)
                x=xx,y=yy;
        }
    }

    cout<<x<<' '<<y<<endl;
}

int main() {

    fast;
    int tc=1;
    cin>>tc;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmask/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
