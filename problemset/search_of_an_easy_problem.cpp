#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];
	for (int i=0; i<n; i++) {
		int ans;
		cin >> ans;
		if (ans) {
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
	return 0;
}
