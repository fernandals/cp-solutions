#include <iostream>

using namespace std;

int main () {
    int n, m, ki, ai;
    cin >> n >> m;

    int likes[n][m];

    for (int i{}; i<n; i++) {
	for (int j{}; j<m; j++) {
	    likes[i][j] = 0;
	}
    }

    for (int i{}; i<n; i++) {
    	cin >> ki;

	for (int j{}; j<ki; j++) {
	    cin >> ai;
	    likes[i][ai] = 1; 
	}
    }

    int count{};
    for (int j{}; j<m; j++) {
	for (int i{}; i<n; i++) {
	    if (likes[i][j] == 0) {
		j+=1;
		i=-1;
	    } else if (i == n-1 and likes[i][j] == 1) {
		//cout << "comida " << j << endl;
		//cout << i << j << likes[i][j] << endl;
		count+=1;	
	    }

	}
    }

    cout << count << endl;
}
