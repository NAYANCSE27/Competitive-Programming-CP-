#include <bits/stdc++.h>
using namespace std;

int main() {

    string s,t;
    bool flag=true;
    cin>>s>>t;
    int l=s.length();
    for (int i=0; i<l; i++) {
        if(s[i]!=t[i]) {
            flag=false;
            break;
        }
    }
    if(flag==false)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}

