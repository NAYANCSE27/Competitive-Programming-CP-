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
    string s,t,st,tt;
    int l1,l2;
    cin>>s>>t;
    l1=s.size();
    l2=t.size();
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    st=s;
    tt=t;


    bool f=true,ff=true;
    for(int i=0; i<l1; i++) {
        if(s[i]==t[0]||s[i]=='?') {
            for(int j=0; j<l2; j++) {
                if((i+j)<l1 && s[i+j]=='?')     s[i+j]=t[j];
                else if((i+j)<l1 && s[i+j]!=t[j]){
                    f=false;
                    break;
                }
            }
        }else   f=false;

        if(f)   break;
        else{
            s.clear();
            s=st;
            f=true;
        }
    }
    
    if(s.find(tt)>l1)   cout<<"UNRESTORABLE"<<endl;
    else {
        reverse(s.begin(), s.end());
        for(int i=0; i<l1; i++) {
            if(s[i]=='?')   s[i]='a';
        }
        cout<<s<<endl;
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
