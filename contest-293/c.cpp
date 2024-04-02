#include <iostream>
#include <set>

using namespace std;

int search_path (int i, int j) {
    if (i >= h or j >= w)
	return 0;
    else if (i == h-1 and j == w-1)
	return 1;


}

int main () {
    int h, w;
    cin >> h >> w;

    int a[h][w];
    for (int i{}; i < h; i++) {
	for (int j{}; j < w; j++) {
	    cin >> a[i][j];
	}
    }

    int count{};
    set<int> pth{a[0][0]};
    for (int i{}; i < h; i++) {
	for (int j{}; j < w; j++) {
	    if (i == h-1 and j == w-1) {
		count++;		
	    } else if ((i>0 and j>0) and pth.find(a[i][j] != pth.end())) {
		i = i+1;
		j--;
	    } else {
		pth.insert(a[i][j]);	
	    }
	}
    }

}
