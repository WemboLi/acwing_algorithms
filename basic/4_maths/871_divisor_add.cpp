#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll, ll> m;
const ll mod=1e9+7;

void fact(int x){
    int c=0;
    for (int i=2;i<=x/i;i++){
        if(x%i==0){
          c=0;
          while(x%i==0){
            x/=i;
            c++;
          }
          m[i]+=c;
        }
    }
    if(x>1){
        m[x]+=1;
    }
    return;
}

int main(){
    int n,a;
    cin>>n;
    
    while(n--){
        cin>>a;
        fact(a);
    }
    ll ans=1;
    for(auto&e: m){
        ll base=1;
        // ll sum=1;
        for(int i=1;i<=e.second;i++){
            base=(e.first*base+1)%mod;
        }
        ans*=base;
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}