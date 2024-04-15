#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x) {
    if (x <= 1)
        return false;
 
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return false;
 
    return true;
}

void generate_ring (int n, vector<bool> used, vector<int> ring) {	
    if (ring.size() == n and is_prime(ring[0] + ring[n-1])) {
	for (auto r : ring) {
	    if (r == ring.back())
		cout << r;
	    else 
	    	cout << r << " ";
	}
	cout << endl;

	return;
    }

    for (int x{2}; x <= n; x++) {
	if (!used[x] and is_prime(ring.back() + x)) {
	    used[x] = true;
	    ring.push_back(x);
	    
	    generate_ring(n, used, ring);

	    used[x] = false;
	    ring.pop_back();
	}
    }
}

int main () {
    int n, idx{1};

    while (cin >> n) {
	vector<int> ring = {1};
	vector<bool> used(n+1, false);

	if (idx > 1)
	    cout << endl;
	
	cout << "Case " << idx << ":" << endl;
	
	generate_ring(n, used, ring);

	idx++;
    }    

}
