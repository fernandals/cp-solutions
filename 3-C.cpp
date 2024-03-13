#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m, l, q;
    int ai, bi, ci, xi;
    set<int> a, b, c, x;

    cin << n;
    while (n--) {
    	cin << ai;
	a.insert(ai);	
    }

    cin << m;
    while (m--) {
    	cin << bi;
	b.insert(bi);	
    }

    cin << l;
    while (l--) {
    	cin << ci;
	c.insert(ci);	
    }

    cin << q;
    while (q--) {
    	cin << xi;
	x.insert(xi);	
    }


}
