#include <bits/stdc++.h>
using namespace std;

const int N=1e5+1;
int a[N];
int tt=-1;

void push(int x){
    a[++tt]=x;
}

void pop(){
    --tt;
}

int query(){
    return a[tt];
}

string empty(){
    return tt>=0?"NO":"YES";
}

int main(){
    int n;
    cin>>n;
    string operation;
    while(n--){
        cin>>operation;
        if(operation=="query"){
            cout<<query()<<endl;
        }else if(operation=="pop"){
            pop();
        }else if (operation=="empty"){
            cout<<empty()<<endl;
        }else{
            int ele;
            cin>>ele;
            push(ele);
        }
    }
    return 0;
}
