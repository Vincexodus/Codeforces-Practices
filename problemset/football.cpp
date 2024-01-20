#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);

	int stack = 1;
	for (int i=0; i<s.size(); i++) {
		if (s[i] == s[i+1]) {
			stack ++;
		} else {
			stack = 1;
		}

		if (stack >= 7) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
