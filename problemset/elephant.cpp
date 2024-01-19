#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	
	int step;
	
	step =  n/5;
	if (n % 5) {
		step ++;
	}			
	cout << step << endl;
	return 0;
}
