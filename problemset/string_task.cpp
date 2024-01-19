#include<bits/stdc++.h>

using namespace std;

int main() {
	string n;
	getline(cin, n);
	
	for (int i=0; i<n.length(); i++) {
		if (tolower(n[i]) == 'a' || tolower(n[i]) == 'o' || tolower(n[i]) == 'y' || tolower(n[i]) == 'e' || tolower(n[i]) == 'u' || tolower(n[i]) == 'i') {
			continue;
		} else {
			cout << '.';
			char l = tolower(n[i]);
			cout << l;
		}
	}
	return 0;
} 

