#include <bits/stdc++.h>
using namespace std;


#define     fileIO      freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define     fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     vin(va,n)   for(int i=0; i<n; i++){int x;cin>>x;va.PB(x);}
#define     lli         long long int
#define     PB          push_back
#define     MP          make_pair
#define     endl        '\n'


const int N=1000005;
const int P1=1000000007;


void testcases() {
    int n,s;
    cin>>n>>s;
    vector<int>va;
    vin(va,n);
    sort(va.begin(), va.end());

    int mid=0;
    for(int i=0; i<n; i++) {
        mid+=va[i];
        if(mid==s) {
            cout<<i+1<<endl;
            return;
        } else if(mid>s) {
            cout<<i<<endl;
            return;
        }
    }
    cout<<n<<endl;
}

int main() {

    fast;
    int tc=1;
    //cin>>tc;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmask/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
