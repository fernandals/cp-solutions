#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    long long int n, k, a;
    cin >> n >> k;

    long long int sum{(k * (k+1))/2};
    unordered_set<int> numbers; 
    while (n--) {
	cin >> a;

	if (a <= k and !numbers.contains(a))
	    sum -= a;

	numbers.insert(a);
    }

    cout << sum << endl;
}
