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
    lli n,mx=-P1,a,b;
    cin>>n;
    if(n&1) {
        lli mid=n/2;
        lli gc=__gcd(mid,(mid+1));
        lli lc=(mid*(mid+1))/gc;
        cout<<lc-gc<<endl;
    } else {
        if(n==2)    cout<<0<<endl;
        else {
            lli mid=n/2;
            if(mid%2==0) {
                lli gc=__gcd((mid-1),(mid+1));
                lli lc=((mid-1)*(mid+1))/gc;
                cout<<lc-gc<<endl;
            } else {
                lli gc=__gcd((mid-2),(mid+2));
                lli lc=((mid-2)*(mid+2))/gc;
                cout<<lc-gc<<endl;
            }
        }
    }
    //    for(lli i=0,j=n; i<=j; i++,j--) {
//        if(i+j==n) {
//            lli gcd=__gcd(i,j);
//            lli lc=(i*j)/gcd;
//            lli mid=lc-gcd;
//            if(mid>=mx) {
//                mx=mid;
//                a=i,b=j;
//            }
//        }
//    }
//    cout<<n<<'\t'<<mx<<'\t'<<a<<'\t'<<b<<endl;
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


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/

