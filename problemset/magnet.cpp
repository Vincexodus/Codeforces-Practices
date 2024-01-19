#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int>array(n);
	
	int sticked = 0;

	for (int i=0; i<n; i++) {
		cin >> array[i];
	}
	
	for (int i=0; i<n; i++) {
		if ((array[i] == 10 && array[i+1] == 1) || (array[i] == 1 && array[i+1] == 10))
			sticked ++;
	}
	
	cout << sticked + 1 << endl;
	return 0;
}
