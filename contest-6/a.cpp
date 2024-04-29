#include<bits/stdc++.h>

using namespace std;

int main () {
    int n, q;
    cin >> n >> q;

    vector<int> students;
    int s;
    for (int i=0; i<n; i++) {
	cin >> s;
	students.push_back(s);
    }

    sort(students.begin(), students.end());
   
    int comp; 
    for (int i=0; i<q; i++) {
	cin >> comp;

	auto idx = lower_bound(students.begin(), students.end(), comp);

	if (idx != students.end()) {
	    cout << n - (idx - students.begin()) << endl;
	} else {
	    cout << 0 << endl;
	}
    } 
}
