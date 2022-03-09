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
        int mid1 = l+temp;
        int mid2 = r-temp;
        if(a[mid1] == key){
                pos = mid1;
                break;
        }
        else if(a[mid2-1] == key)
        {
                pos = mid2;
                break;
        }
        else if(key < a[mid1]) r = mid1-1;
        else if(key > a[mid2]) l = mid2+1;
        else{
            l = mid1+1;
            r = mid2-1;
        }
    }
    cout << pos+1;
}
