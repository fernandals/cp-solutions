#include <bits/stdc++.h>

using namespace std;

void record_tape (int tape, vector<int> tracks, vector<bool> used, int best_t, vector<int> recording) {
    - se o tempo das mscs marcadas como used é menor q tape ent checar se é melhor q best_t se seim salva como recording pq é a melhor 	
}

int main () {
    int tape;

    while (cin >> tape) {
	int n_tracks;
	cin >> n_tracks;

	vector<int> tracks;
	int t;
	for (int i{}; i < n_tracks; i++) {
	    cin >> t;
	    tracks.push_back();
	}

	vector<bool> used(n_tracks, false);

	int best{};
	vector<int> recording;
	record_tape(tape, tracks, used, best, recording);
    }
}	
