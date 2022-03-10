#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for(int &i:a) cin >> i;
    for(int j = 2; j <= n; j++) {
        int l = 1;
        int r = j-1;
        int temp = a[j-1];
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(a[mid-1] > temp) r = mid-1;
            else l = mid+1;
        }
        //vong while tim phan tu a[l-1] sao cho a[l-1] >= a[j-1]
        // neu khong tim thay thi l = j va khi do hien nhien a[l-1] = a[j-1]
        for(int k = 0; k <= j-l-1; k++) {
            a[j-k-1] = a[j-k-2];
        }
        a[l-1] = temp;
    }
    for(int i:a) cout << i << " ";
}
