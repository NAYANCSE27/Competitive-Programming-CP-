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
    vector<int>va,vb;
    cin>>n;
    vin(va,n);
    vb.PB(va[0]);

    for(int i=1; i<n; i++) {
        if(va[i]>0&&vb[i-1]>=va[i]) {
            cout<<-1<<endl;
            return;
        }
        vb.PB(vb[i-1]+va[i]);
    }

    for(int i=0; i<n; i++)  cout<<vb[i]<<' ';
    cout<<endl;
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
