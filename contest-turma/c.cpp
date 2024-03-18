#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    cin >> n;

    string str, res{""};
    
    getline(cin, str);
    getline(cin, str);

    for (int i{0}; i < n; i++) {
	res += str[i];
	
	if (i+1 < n and str[i] == 'n' and str[i+1] == 'a')
	    res += 'y';
    }

    cout << res << endl;
}
