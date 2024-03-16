#include <iostream>
#include <string>

using namespace std;

int main() {
    int l{}, r{}, e{};
    string str;
    getline(cin, str);

    for (auto c : str) {
	if (c == '<')
	    l++;
	else if (c == '>')
	    r++;
	else
	    e++;
    }

    if (l == 1 and r == 1 and e == str.size()-2)
        cout << "Yes" << endl;
    else
	cout << "No" << endl;
}
