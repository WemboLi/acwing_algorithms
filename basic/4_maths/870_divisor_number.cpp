#include <bits/stdc++.h>
using namespace std;

long long ans=1;
long long mod=1e9+7;
map<int, int> m;

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
   int a,n;
   cin>>n;
   while(n--){
       cin>>a;
       fact(a);
   }
   for (auto&e:m){
       ans *= (e.second+1);
       ans %= mod;
   }

   cout<<ans<<endl;
   return 0;
}