#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string str; 
    set<int> ns;

    getline(cin, str);

    for (auto c : str) {
	ns.insert(int(c - '0'));
    } 

    for (int i{}; i <= 9; i++) {
        if (ns.find(i) == ns.end()) {
	    cout << i << endl;
	    break;
	}
    }    
}
