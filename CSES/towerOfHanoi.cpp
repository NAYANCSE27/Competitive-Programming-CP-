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

vector<pair<int,int> >va;

void towerOfHanoi(int n, int a, int b, int c) {
    if(n>0) {
        towerOfHanoi(n-1, a, c, b);
        va.PB(MP(a,c));
        towerOfHanoi(n-1, b, a, c);
    }
}

void testcases() {
    int n;
    cin>>n;
    towerOfHanoi(n,1,2,3);

    cout<<va.size()<<endl;
    for(int i=0; i<(int)va.size(); i++)
        cout<<va[i].first<<' '<<va[i].second<<endl;
}

int main() {

    fast;
    int tc=1;
    while(tc--)
        testcases();

    return 0;

}


/**


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS


*/
