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
    int ara[111],n,x,y,m;
    vector<int>va;
    cin>>n>>x>>y;
    vin(va,n);
    sort(va.begin(), va.end());
    memset(ara,0,sizeof(ara));

    m=x*y;
    for(int i=0; i<n; i++) {
        ara[va[i]]=1;
        int mm=m,j=va[i];
        while(mm>=0&&j>0) {
            ara[j]=1;
            j--;
            mm--;
        }
        mm=m,j=va[i];
        while(mm>=0&&j<=100) {
            ara[j]=1;
            j++;
            mm--;
        }
    }

//    for(int i=1;i<=100; i++)
//        cout<<ara[i]<<' ';
//    cout<<endl;

    int ctn=0;
    for(int i=1; i<=100; i++)
        if(ara[i]==0)   ctn++;
    cout<<ctn<<endl;
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
