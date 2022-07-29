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
    int n,mid;
    vector<int>va;
    cin>>n;
    vin(va,n);
    mid=ceil(pow(2,n));

    lli ans=P1;
    for(int i=0; i<mid; i++) {
        lli a=0,b=0;
        for(int j=0; j<n; j++) {
            if(i&(1<<(j)))  a+=va[j];
            else            b+=va[j];
        }
        //cout<<a<<'\t'<<b<<endl;
        lli diff=abs(a-b);
        ans=min(ans,diff);
    }
    cout<<ans<<endl;
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
