#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a > b) return gcd(b, a);
    else if(a == 0) return b;
    else if(a % 2 == 0 && b % 2 == 0) return 2*gcd(a/2, b/2);
    else if(a % 2 == 0 && b % 2 != 0) return gcd(a/2, b);
    else return gcd(a, b-a);
}

int main()
{
    int a[5] = {24, 10, 121, 60, 18};
    int b[5] = {16, 15, 77, 270, 60};
    for(int i = 0; i < 5; i++){
        cout << "gcd(" << a[i] << ", " << b[i] << ") = " << gcd(a[i], b[i]) << endl;
    }
}
