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
    lli n,l,r;
    cin>>n;
    l=1,r=n;
    while(l<=r) {
        lli mid=(l+r)/2;
        lli x=(mid*(mid+1))/2;
        if(x==n) {
            cout<<mid<<endl;
            return;
        }else if(x>n)   r=mid-1;
        else            l=mid+1;
    }
    cout<<l-1<<endl;
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


 git config --global user.email "you@example.com"
git config --global user.name "Your Name"