#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;
	
	int arr[5] = {100, 20, 10, 5, 1};

	int i = 0;
	while (n > 0) {
		if (n >= arr[i]) {
			result ++;
			n -= arr[i];
		} else {
			i++;
		}
	}
	cout << result << endl;
	return 0;
}
