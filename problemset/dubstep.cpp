#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	string str;
	for (int i=0; i<s.size(); i++) {
		if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
			str += ' ';	
			i+=2;
			continue;
		}else {
			str += s[i];
		}
	}
	cout << str << endl;
	return 0;
}
