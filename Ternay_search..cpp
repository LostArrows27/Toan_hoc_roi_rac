#include<bits/stdc++.h>

using namespace std;

int main()
{
    int key;
    cin >> key;
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for(int &i:a) cin >> i;
    int pos = -1;
    int l = 1;
    int r = n;
    while(l <= r){
        int temp = (r-l)/3;
        int lo = l+temp;
        int hi = r-temp;
        if(a[lo] == key){
                pos = lo;
                break;
        }
        else if(a[hi-1] == key)
        {
                pos = hi;
                break;
        }
        else if(key < a[lo]) r = lo-1;
        else if(key > a[hi]) l = hi+1;
        else{
            l = lo+1;
            r = hi-1;
        }
    }
    cout << pos+1;
}
