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
    int n,m;
    cin>>n>>m;
    vector<int>va(n);

    if(n%m!=0) {
        cout<<-1<<endl;
        return;
    }

    iota(va.begin(), va.end(), 1);
    va[0]=m;
    va[n-1]=1;
    for(int i=2*m; i<=n; i+=m) {
        if(n%i==0) {
            va[m-1]=i;
            m=i;
        }
    }

    for(int i=0; i<n; i++)  cout<<va[i]<<' ';
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
