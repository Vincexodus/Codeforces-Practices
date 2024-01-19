#include<bits/stdc++.h>

using namespace std;

int main() {
	int s, n, x, y;
	cin >> s >> n;

	for (int i=0; i<n; i++) {
		cin >> x >> y;
		if (s > x) {
			s +=y;
		} else {
			s = 0;
			break;
		}
	}

	if (s > 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
} 
