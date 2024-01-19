#include <iostream>

using namespace std;

int main() {
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >>d;
	
	int damaged = 0;
	
	for (int i = 1; i <= d; i++) {
		if (!(i%k) || !(i%l) || !(i%m) || !(i%n)) damaged ++; 
	}
	cout << damaged << endl;
	return 0;
}
