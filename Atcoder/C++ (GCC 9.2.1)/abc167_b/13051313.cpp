#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {

    lli a,b,c,k,ans=0,mid;
    cin>>a>>b>>c>>k;
    mid=k;
    ans+=a;
    k-=a;
    if(k==0) {
        printf("%lld\n",ans);
    }

    else if(k<0) {
        printf("%lld\n",min(mid,a));
    }

    else if(k>0) {
        k-=b;
        if(k<=0) {
            printf("%lld\n",ans);
        }
        if(k>0) {
            if(k>=c) {
                ans-=c;
                printf("%lld\n",ans);
            } else {
                ans-=k;
                printf("%lld\n",ans);
            }
        }
    }

    return 0;
}

