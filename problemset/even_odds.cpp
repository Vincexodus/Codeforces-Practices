#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int n, m;

    cin >> n >> m;
	
	if (m <= (n+1)/2) // odd
		cout << (2*m)-1;
	else {
		m = m -	((n+1)/2);
		cout << 2*m;
	}
	
	return 0;
}

