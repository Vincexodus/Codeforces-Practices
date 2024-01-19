#include<bits/stdc++.h>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	int tests[n];
	float total = 0;
	for (int i=0; i<n; i++) {
		cin >> tests[i];
	}

	for (int i=0; i<n; i++) {
		cout << (tests[i] + 1)/2  - 1<< endl;
	}
	return 0;
}
