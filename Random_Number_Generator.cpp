#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 20;
    vector<int> v;
    v.resize(n);
    v[0] = 3;
    for(int i = 1; i < 20; i++) v[i] = (v[i-1]*4+1) % 7;
    for(auto i:v) cout << i << endl;
}

