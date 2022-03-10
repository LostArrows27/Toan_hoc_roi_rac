#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for(auto &i:a) cin >> i;
    for(int j = 2; j <= n; j++){
        int i = 1;
        while(a[j-1] > a[i-1]) i ++;
        int m = a[j-1];
        for(int k = 0; k <= j-i-1; k++) a[j-k-1] = a[j-k-2];
        a[i-1] = m;
    }
    for(int i:a) cout << i << " ";
}

