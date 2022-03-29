#include<iostream>
#include<string>

using namespace std;

int counting_bit(string s, int n)
{
    if(n == -1) return 0;
    else if(s[n] == '1') return 1 + counting_bit(s,n-1);
    else return counting_bit(s,n-1);
}

int main()
{
    string s = "10101010101111";
    int n = s.length();
    cout << counting_bit(s, n-1);
}
