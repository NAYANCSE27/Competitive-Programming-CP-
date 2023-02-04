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
    int n;
    cin>>n;
    vector<int>sum(n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            int x;
            cin>>x;
            --x;
            sum[x]+=j;
        }
    }

    vector<int>pa(n);
    iota(pa.begin(), pa.end(), 0);
    sort(pa.begin(), pa.end(), [&](int i, int j){
        return sum[i]<sum[j];
    });

    for(int i=0; i<n; i++)
        cout<<pa[i]+1<<" \n"[i==n-1];
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
