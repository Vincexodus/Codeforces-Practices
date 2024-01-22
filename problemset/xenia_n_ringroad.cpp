#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

	long long now = 1, p , steps = 0;

	while (m--) {
		cin >> p;
		if (p < now)
			steps += ( n - now + p );
		else
			steps += (p - now);
		now = p;
	}
    cout << steps << endl;
    return 0;
}

