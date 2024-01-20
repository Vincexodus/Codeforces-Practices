#include<bits/stdc++.h>

using namespace std;

int main() {
	
	// akshat wins if lesser side is odd
	int n, m;
	cin >> n >> m;

	if (n > m) swap(n, m);

	if (n%2 == 0)
		cout << "Malvika";
	else
		cout << "Akshat";
	return 0;
}
