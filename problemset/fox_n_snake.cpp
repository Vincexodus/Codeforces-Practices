#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	bool end = true;
	bool start = false;

	for (int i=0; i<n; i++) {
		if (!start) end = true;
		for (int j=0; j<m; j++) {
			if (!(i%2)) {
				cout << "#";
			} else {
				if (end && j==m-1) {
					cout << "#";
					end = false;
					start = true;
				} else if (start && j==0){
					cout << "#";
					start = false;
				} else {
					cout << ".";			
				}
			}
			
		}
		cout << endl;
	}
	return 0;
}
