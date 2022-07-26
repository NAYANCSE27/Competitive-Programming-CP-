#include<bits/stdc++.h>
using namespace std;

int main () {
    
    int t;
    cin>>t;
    while(t--) {
        int a=0,b=0;
        for(int i=0; i<3; i++) {
            int x;
            cin>>x;
            if(x==0)
                a++;
            else 
                b++;
        }
        if(a>0&&b>0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    
    return 0;
}