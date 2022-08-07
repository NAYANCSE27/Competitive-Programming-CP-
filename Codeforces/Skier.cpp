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
    int n,x=0,y=0,total=0;
    string s;
    cin>>s;
    n=s.size();
    map<pair<pair<int,int>,pair<int,int> > ,int>mp;

    for(int i=0; i<n; i++) {
        int x1=x,y1=y;
        if(s[i]=='S')           y--;
        else if(s[i]=='N')      y++;
        else if(s[i]=='W')      x--;
        else                    x++;
        if(mp[{{x1,y1},{x,y}}]==0)      total+=5;
        else                            total++;
        mp[{{x,y},{x1,y1}}]=1;
        mp[{{x1,y1},{x,y}}]=1;
    }

    cout<<total<<endl;
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