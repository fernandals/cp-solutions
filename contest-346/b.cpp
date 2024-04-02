#include <bits/stdc++.h>

using namespace std;

int main() {
    string piano{"wbwbwwbwbwbw"};

    int w, b;
    cin >> w >> b;

    while(piano.length() < w+b) {
	piano += piano;
    }

    for (int i{w+b}; i < piano.length(); i++) {
	int fst{i - (w+b)};
	string subs = piano.substr(fst, i-fst);

	int wc{count(subs.begin(), subs.end(), 'w')},
	    bc{count(subs.begin(), subs.end(), 'b')};

	if (wc == w and bc == b) {
	    cout << "Yes" << endl;
	    return 0;
	}
    }

    cout << "No" << endl;
    return 0;
}
