#include <iostream>
#include <string>

using namespace std;

int main () {
    string str;
    getline(cin, str);

    int cond{};
    for (int i{1}; i<16; i++) {
	if ((i+1) % 2 == 0 and str[i] != '0')
    	    cond = 1;
    }

    if (cond == 1)
	cout << "No" << endl;
    else
	cout << "Yes" << endl;
}
