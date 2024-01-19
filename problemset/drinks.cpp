#include<bits/stdc++.h>

using namespace std;

int main() {
	float n = 0;
	cin >> n;
	
	float total = 0;
	for (int i=0; i<n; i++) {
		int v = 0;
		cin >> v;
		total +=v;
	}

	cout << total/n << endl;
	return 0;
}
