#include<iostream>

using namespace std;

int minimum_number(int a, int n)
{
    int k = a%10;
    //n is the last number of 1st a
    //k is the last number of a before it "reject" the last number
    if(a == 0) return n;
    else if(k <= n){
            a = (a-k)/10;
            return minimum_number(a, k);
    }
    else{
         a = (a-k)/10;
         return minimum_number(a, n);
    }
}

int main()
{
    int a[4] = {8246, 952814, 105825, 123456789};
    for(auto i:a){
        int n = i % 10; // take n as the last number of i and i is member of a array
        cout << minimum_number(i, n) << " ";
    }
}

