#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x;

    int test{n};
    for (int i{1}; i<n; i++) {
    	cin >> y;
	
	if (abs(x-y) >= n) {
	    cout << "Not Jolly" << endl;
	    return 0; 
	}

	x = y;	
    } 

    cout << "Jolly" << endl;
    return 0;
}
