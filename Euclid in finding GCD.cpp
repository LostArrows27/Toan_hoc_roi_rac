#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = a;
    int d = b;
    while(a%b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    cout << "GCD of " << c << " and " << d << " is: " << b;
}
