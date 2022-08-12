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
    int n,k;
    map<int,int>mp;
    vector<int>va;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        mp[x]++;
    }

    for(auto it:mp)     va.PB(it.second);
    sort(va.rbegin(), va.rend());

    int total=0;
    for(int i=k; i<va.size(); i++)    total+=va[i];
    cout<<total<<endl;
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


Bitmasks/Prefix Sum/Binary Exponentiation/DFS/BFS
/Binary Search/Recursion/GCD/LCM/Divisors/Knapsack/LCS



*/
