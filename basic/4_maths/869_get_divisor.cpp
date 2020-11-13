#include <bits/stdc++.h>
using namespace std;

void get_divisor(int a){
    vector<int> res;
    for(int i=1;i<=a/i;i++){
        if(a%i==0){
            res.push_back(i);
            if (i != a/i){
               res.push_back(a/i);
            }
        }
    }
    sort(res.begin(),res.end());
    for(auto& r:res){
        cout<<r<<" ";
    }
    cout<<endl;
    return;
}

int main(){
   int a,n;
   cin>>n;
   while(n--){
       cin>>a;
       get_divisor(a);
   }
   return 0;
}