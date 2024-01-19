#include<bits/stdc++.h>

using namespace std;

// since side must be parallel, each stone must cover fully
// therefore cant use area
int main() {
	long long n, m, o, l, w;
	cin >> n >> m >> o;
	
	l = ((m+o-1)/o);
	w = ((n+o-1)/o);

	cout << l*w << endl;
	return 0;
}
