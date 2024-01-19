#include<bits/stdc++.h>

using namespace std;

// if char after first has lower, don't format
// if caps, all char is flipped
// cuz caps is always capital at the back

int main() {
	string n;
	getline(cin, n);
	
	bool caps = true;
	char* arr = new char[n.length() + 1];
	strcpy(arr, n.c_str());

	for (int i=1; i<strlen(arr); i++) {
		if(islower(arr[i])) {
			caps = false;
		}
	}

	if (caps) {
		for (int i = 0; i< strlen(arr); i++) {
			if(isupper(arr[i]))
				arr[i] = tolower(arr[i]);
			else
				arr[i] = toupper(arr[i]);
		}
	}

	cout << arr << endl;
	return 0;
} 

