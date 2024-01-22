#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];
	int count = 1, max = 1; 

	if (n == 1) {
		cout << count;
		return 0;
	}
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}

	for (int i=0; i<n-1; i++) {
		if (arr[i] <= arr[i+1]) {
			count ++;
			if (count > max ) max = count;
		}
		else
			count = 1;
	}
	cout << max << endl;
	return 0;
}
