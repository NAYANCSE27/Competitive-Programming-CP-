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
    cin>>n;
    vector<int>va(n+9, P1);
    queue<int>qa;
    qa.push(1);
    va[1]=1;

    while (qa.size()!=0){
        int x=qa.front();
        qa.pop();

        if(va[(x*10)%n]>va[x]) {
            va[(x*10)%n]=va[x];
            qa.push((x*10)%n);
        }
        if(va[(x+1)%n]>va[x]+1) {
            va[(x+1)%n]=va[x]+1;
            qa.push((x+1)%n);
        }
    }

    cout<<va[0]<<endl;
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
