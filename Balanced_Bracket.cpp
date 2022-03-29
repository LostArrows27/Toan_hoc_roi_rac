#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> balanced_Bracket(int n) // n is pair of bracket
{
	vector<string> two;
	vector<string> ans;
	if (n == 1) {
		two.push_back("()");
		return two; // length of char is 2 or only 1 pair
	}
	if (n == 2) {
		two.push_back("(())");
		two.push_back("()()");
		return two; // length of char is 4 or only 2 pairs
	}
	// so n = {1,2} is base cases
	two = balanced_Bracket(n - 1);
	// when n decrease to 2, "two" array will generate 2 element (()) and ()() in it
	// and the loop will add bracket continuously in 3 way to each element of "two" array
	// until we have n-pair bracket
	for (int i = 0; i < two.size(); i++) {
		string kep = "(", truoc = "(", sau = "(";
		kep = kep + two[i] + ")"; // (x)
		truoc = truoc+ ")" + two[i]; // () x
		sau = two[i] + sau + ")"; // x ()
		ans.push_back(kep);
		ans.push_back(truoc);
		ans.push_back(sau);
	}
	ans.pop_back();
	// cause  "two" have ()() in the last so after the last "push_back" turn
	// the "truoc" and "sau" will add the same bracket to "two"
	// Ex: truoc = () + ()() // sau = ()() + ()
	return ans;
}
int main()
{
    vector<vector<string>> ff;
	int n;
    cin >> n;
    ff.resize(n/2);
    // every vector of vector 2D ff will contain all pair of a/2 pair in a increasing order
    int temp = 1;
    for(auto &i:ff){
        i = balanced_Bracket(temp);
        temp ++;
        // temp is pair of bracket
        // generate from 1 pair --> 2 pair --> 3 pair
    }
    for(auto i:ff) for(auto k:i) cout << k << endl;
}


