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
    vb.PB(0);

    for(int i=1; i<n; i++) {
        int m=va[i] & (va[i-1]^vb[i-1]);
        if(m==(va[i-1]^vb[i-1]))      vb.PB(0);
        else {
            int need=0;
            for(int j=30; j>=0; j--) {
                int _1=(va[i] & (1<<(j)));
                int _2=((va[i-1]^vb[i-1]) & (1<<(j)));
                if(_1==0&&_2>0)    need+=_2;
            }
            vb.PB(need);
        }
    }

    for(int i=0; i<n; i++)      cout<<vb[i]<<' ';
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
