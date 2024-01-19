#include <iostream>

using namespace std;

// two must be excluded cuz its gonna split evenly

int main() {
	int n;
	cin >> n;

	if (n % 2 == 0 && n >2) {
		cout << "YES" << endl; 
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
