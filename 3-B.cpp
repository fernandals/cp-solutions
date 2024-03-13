#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n{};
    string item;
    set<string> lottery;

    cin >> n;
    getline(cin, item);

    for (int i{}; i<n; i++) {
        getline(cin, item);
	lottery.insert(item);	
    }

    cout << lottery.size() << endl;
}
