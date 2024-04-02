#include <iostream>
#include <string>

using namespace std;

int main() {
    long int n, finalCost{};
    cin >> n;

    string str;
    getline(cin, str);
    getline(cin, str);

    long int cost[n];
    for (int i{}; i<n; i++)
	cin >> cost[i];

    int count{};
    for (int i{}; i<n-1; i++)
	if (str[i] == str[i+1])
	    count++;

    while (count > 1) {

    }

    cout << finalCost << endl;
}
