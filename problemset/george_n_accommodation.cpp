#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0, p = 0, q = 0;

	for (int i=0; i<n; i++) {
		cin >> p >> q;
		if ((q - p) > 1)
			count ++;
	}


	cout << count << endl;
	return 0;
}
