#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int max = 0;
	int arr[n];
	int total = 0;
	for (int i =0; i<n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	
	sort(arr, arr + n, greater<int>());

	int taken = 0;

	if (n == 2 && (arr[0] == arr[1])) 
		max = 2;
	else {
		for (int i =0; i<n; i++) {	
			if (taken < total) {
				max ++;
				taken += arr[i];
				total -= arr[i];
				if (taken == total) {
					max ++;
					break;
				}
			} else {
				break;
			}
		}
	}
	
	cout << max << endl;
	return 0;
}
