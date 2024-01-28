#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n, m;

    cin >> n >> m;
	
	long long int midpoint, count;

	if ((n%2)) // odd
		midpoint = n/2 +1;
	else
		midpoint = n/2;

	if (m > midpoint) {
		count = (m - midpoint)*2;
	} else {
		count = m*2 - 1;
	}

	cout << count << endl;
	return 0;
}

