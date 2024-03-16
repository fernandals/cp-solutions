#include <iostream>

using namespace std;

int main() {
    long long int x;
    cin >> x;

    if (x % 10 > 0)
	cout << x/10 + 1 << endl;
    else
	cout << x/10 << endl;
}
