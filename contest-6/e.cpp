#include <bits/stdc++.h>

using namespace std;

string invert_string (string str) {
    string inv = "";
    for (auto rit=str.rbegin(); rit!=str.rend(); ++rit) {
	inv += *rit;
    }
    return inv;
}

int main () {
    int n;
    cin >> n;

    cin.ignore();
    vector<string> strs;
    string str;
    for (int i=0; i < n; i++) {
    	getline(cin, str);
	strs.push_back(str);
    }

    for (int i=0; i < n; i++) {
	for (int j=0; j < n; j++) {
	    if (i != j) {
	    	string con = strs[i] + strs[j];
	    	string inv = invert_string(con);

		if (con.compare(inv) == 0) {
		    cout << "Yes" << endl;
		    return 0;
		}
	    }
	}
    }

    cout << "No" << endl;
    return 0; 
}
