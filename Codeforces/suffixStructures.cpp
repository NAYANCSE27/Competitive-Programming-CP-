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

bool issubsequence(string& s1, string& s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    return i == n;
}


void testcases() {
    string s,t;
    int a[33],b[33];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    cin>>s>>t;

    for(int i=0; i<s.size(); i++)   a[s[i]-'a'+1]++;
    for(int i=0; i<t.size(); i++)   b[t[i]-'a'+1]++;
    
    if(s.size()==t.size()) {
        bool f=true;
        for(int i=1; i<=26; i++) {
            if(a[i]!=b[i]) {
                f=false;
                break;
            }
        }

        if(f)       cout<<"array"<<endl;
        else        cout<<"need tree"<<endl;
    }else {

        bool f=true,ff=true;
        for(int i=1; i<=26; i++) {
            if(a[i]>b[i])       f=false;
            else if(b[i]>a[i])  ff=false;
        }

        bool flag=issubsequence(t,s);
        if(flag)        cout<<"automaton"<<endl;
        else {
            if(ff==false)       cout<<"need tree"<<endl;
            else                cout<<"both"<<endl;
        }
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
