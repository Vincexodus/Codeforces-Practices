#include<bits/stdc++.h>

using namespace std;

// lowest strength dragon first
// until strength is lower than dragon
int main() {
	int s, n, x, y;
	cin >> s >> n;
	
	// strength, bonus
	vector<pair<int, int>> dragons;

	for (int i=0; i<n*2; i+=2) {
		cin >> x >> y;
		dragons.push_back({ x, y });
	}
	
	sort(dragons.begin(), dragons.end());

	for(int i=0; i<dragons.size(); i++) {
		if (s > dragons[i].first) {
			s +=dragons[i].second;
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
} 
