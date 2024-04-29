#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;

    int num[n];
    for (int i=0; i<n; i++)
	cin >> num[i];

    multiset<int> ts;
    ts.insert(num[0]);

    for (int i=1; i<n; i++) {
        auto up = ts.upper_bound(num[i]);
	    
	if (up == ts.end())
	    ts.insert(num[i]);
	else {
	    ts.erase(up);
	    ts.insert(num[i]); 
	}
    }

    cout << ts.size() << endl;
}	
