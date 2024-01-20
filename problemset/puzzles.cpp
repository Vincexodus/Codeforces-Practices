#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m = 0;
	cin >> n >> m;
	
	int arr[m];
	for (int i=0; i<m; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + m);
	// max diff
	int minDiff = arr[n-1] - arr[0];

	for (int i=1; i<=m-n; ++i) {
		minDiff = min(minDiff, arr[i+n-1] - arr[i]);
	}
	
	cout << minDiff << endl;
	return 0;
}
