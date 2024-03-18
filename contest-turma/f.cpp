#include <iostream>
#include <set>

using namespace std;

int main () {
    int n;
    set<int> ns;

    for (int i{}; i <5; i++) {
	cin >> n;
	ns.insert(n);
    }

    cout << ns.size() << endl;
}
