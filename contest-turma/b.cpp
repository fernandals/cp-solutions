#include <iostream>
#include <string>
#include <set>

using namespace std;

int main () {
    int n, rcount{};
    cin >> n;

    string str;
    getline(cin, str);
    set<string> sticks;
    while (n--) {
	getline(cin, str);

	sticks.insert(str);
    }

    for (auto s1 : sticks) {
    	string check{};
	for (int i{int(s1.size())-1}; i >= 0; i--) {
	    check += s1[i];
	}
	
	if (sticks.find(check) != sticks.end() and check.size() > 1) {
	    rcount++;
	}
    } 

    //cout << sticks.size() <<  rcount/2 << endl;

    cout << sticks.size() - rcount/2 << endl;
}
