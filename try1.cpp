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

void rec(string &s, int i, int j) {
    //cout<<s<<'\t'<<i<<'\t'<<j<<endl;
    if(i<j) {
        swap(s[i],s[j]);
        i++,j--;
        rec(s,i,j);
    }
}

void testcases() {
    int n;
    string s;
    cin>>s;
    n=s.size();
    rec(s,0,n-1);
    cout<<s<<endl;
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
