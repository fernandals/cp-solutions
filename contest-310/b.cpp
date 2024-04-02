#include <iostream>

using namespace std;

int main () {
    int n, m, f;
    cin >> n >> m;

    // [0] price - [1] functions qtd - [2..] functions
    int prod[n][m+2]{};
    for (int i{}; i<n; i++) {
	cin >> prod[i][0] >> prod[i][1];
	
	for (int j{}; j<prod[i][1]; j++) {
	    cin >> f;
	    prod[i][f+1] = 1;
	}
    }

    bool cond{};
    for (int i{}; i<n; i++) {
	for (int j{}; j<n; j++) {
	    if (i != j) {
		if (prod[i][0] >= prod[j][0]) {
		    int check{};	
		    for (int k{1}; k <= prod[i][1]; k++) {
			check = check and (prod[i][k+1] == prod[j][k+1]);
		     }

		     if (check == true) {
		     }


		}
	    }
	}
    }

    if (cond == true)
	cout << "Yes" << endl;
    else
	cout << "No" << endl;
}
