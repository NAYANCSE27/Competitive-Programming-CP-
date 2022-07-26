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
    string s;
    cin>>s;
    int ara[30];
    memset(ara,0,sizeof(ara));

    for(int i=0; i<3; i++)
        ara[s[i]-'a'+1]++;

    for(int i=1; i<=26; i++) {
        if(ara[i]==3) {
            cout<<-1<<endl;
            return;
        } else if(ara[i]==1) {
            char c='a'+i-1;
            cout<<c<<endl;
            return;
        }
    }
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

