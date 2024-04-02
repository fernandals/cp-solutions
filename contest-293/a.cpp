#include <iostream>
#include <string>

using namespace std;

int main () {
    string str;
    getline(cin, str);

    for (int i{}; i < str.size()/2; i++) {
	swap(str[2*i], str[2*i+1]);
    }

    cout << str << endl;
}

