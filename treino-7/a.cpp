#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x;
    vector<int> a, b, c;
    for (int i=0; i<n; i++) {
	cin >> x;
	a.push_back(x);
	c.push_back(x);
    }

    for (int i=0; i<m; i++) {
	cin >> x;
	b.push_back(x);
	c.push_back(x);	
    }

    sort(c.begin(), c.end());

    int idx = 1;
    int idxa[n], idxb[m];
    int j=0, k=0;
    for (int i=0; i < n+m; i++) {
	if (binary_search(a.begin(), a.end(), c[i])) {
	    idxa[j++] = idx++;
	} else {
	    idxb[k++] = idx++;
	}
    }

    for (auto a1 : idxa)
	cout << a1 << " ";
    cout << endl;

    for (auto b1 : idxb) 
	cout << b1 << " ";
    cout << endl;
}
