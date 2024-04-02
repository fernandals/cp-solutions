#include <iostream>

using namespace std;

int main() {
    int n, ai, aj;
    cin >> n;

    cin >> ai;
    for (int i{}; i<n-1; i++) {
	cin >> aj;
	cout << ai*aj << " ";

	ai = aj;
    }

    cout << endl;
}
