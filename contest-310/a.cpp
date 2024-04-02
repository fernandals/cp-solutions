#include <iostream>

using namespace std;

int main () {
    int n, p, q;
    cin >> n >> p >> q;
    
    int d, min_d{p};

    while (n--) {
	cin >> d;
	if (d + q < min_d)
	    min_d = d + q;
    }

    cout << min_d << endl;
}
