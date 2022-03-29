#include<iostream>
#include<string>

using namespace std;

string reverse_string(string &s, int i, int j)
{
    if(i > j) return s;
    else{
        swap(s[i], s[j]);
        return reverse_string(s, i+1, j-1);
    }
}

int main()
{
    string test[5] = {"abcde", "qwerty", "asdgqer", "lalalhahah", "eeeeeooooo"};
    for(auto i:test) cout << reverse_string(i, 0, i.length()-1) << endl;
}
