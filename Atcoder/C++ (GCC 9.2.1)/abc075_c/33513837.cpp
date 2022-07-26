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

int ara[N];

void testcases() {
    int aa[55][55];
    char cc[55][55];
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++)
            cin>>cc[i][j];
    }

    for(int i=0; i<55; i++)
        for(int j=0; j<55; j++)
            aa[i][j]=0;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(cc[i][j]=='#') {
                if(cc[i-1][j-1]!='#')   aa[i-1][j-1]++;
                if(cc[i-1][j]!='#')     aa[i-1][j]++;
                if(cc[i-1][j+1]!='#')   aa[i-1][j+1]++;
                if(cc[i][j-1]!='#')     aa[i][j-1]++;
                if(cc[i][j+1]!='#')     aa[i][j+1]++;
                if(cc[i+1][j-1]!='#')   aa[i+1][j-1]++;
                if(cc[i+1][j]!='#')     aa[i+1][j]++;
                if(cc[i+1][j+1]!='#')   aa[i+1][j+1]++;
            }
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++){
            if(aa[i][j]==0&&cc[i][j]=='#')  cout<<"#";
            else                            cout<<aa[i][j];
        }
        cout<<endl;
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

