#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main () {
    int n, i{1}, ai;
    cin >> n;

    set<int> called, idxs, ncalled;

    while(n--) {
	cin >> ai;
	
	if (called.find(i) == called.end()) {
	    called.insert(ai); 
	}

	idxs.insert(i++);
    }

    set_difference(idxs.begin(), idxs.end(), called.begin(), called.end(), inserter(ncalled, ncalled.end()));

    cout << ncalled.size() << endl;
    for (auto id : ncalled) {
    	cout << id << " ";
    }
    cout << endl;
}
