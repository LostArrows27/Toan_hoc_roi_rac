#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = a;
    int d = b;
    while(b != 0){
        a = b;
        b = a%b;
    }
    cout << "GCD of " << c << " and " << d " is: " << b;
}
