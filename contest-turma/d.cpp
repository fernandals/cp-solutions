#include <iostream>

using namespace std;

int main () {
    int n, a;
    cin >> n;

    while (n--) {
    	cin >> a;
	if (a % 2 == 0)
	    cout << a << " ";
    }
    cout << endl;
}
