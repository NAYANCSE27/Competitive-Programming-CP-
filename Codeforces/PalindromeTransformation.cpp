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
    int n,p,mid,l,r;
    string s;
    cin>>n>>p>>s;
    mid=n/2;
    l=0,r=mid;
    if(p>mid)   p=n-p+1;

    for(int i=p-1; i>=0; i--){
        if(s[i]!=s[n-i+1])  l=i;
    }
    for(int i=mid; i>=p; i--){
        if(s[i]!=s[n-i+1])  r=i;
    }

    
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
