#include "bits/stdc++.h"
using namespace std;

const int N = 1e6 + 5;
int q[N];

void quick_sort(int q[], int l, int r) {
    if (l >= r) {
        return;
    }
    
    int m = (r - l) / 2 + l;
    int pivot = q[m];
    
    int i = l - 1, j = r + 1;
    
    while (i < j) {
        while (q[++i] < pivot) {}
        while (q[--j] > pivot) {}
        if (i < j) {
            swap(q[i], q[j]);
        }
        
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    
    quick_sort(q, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
    }
    
    return 0;
}