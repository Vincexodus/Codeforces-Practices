#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];

	if (arr[0] == 1) { 
		if (arr[1] == 1) 
			if(arr[2] == 1) // 111
				cout << 3;
			else // 11x
				cout << 2 * arr[2];
		else 
			if (arr[2] == 1) // 1x1
				cout << 2 + arr[1];
			else // 1xx
				cout << (1 + arr[1]) * arr[2];
	} else {
		if (arr[1] == 1)
			if (arr[2] == 1) // x11
				cout << 2 * arr[0];
			else // x1x
				 if (arr[0] > arr[2])
					 cout << arr[0] * (arr[2] + 1);
				else
					cout << (arr[0] + 1) * arr[2];
		else
			if (arr[2] == 1) // xx1
				cout << arr[0] * (arr[1] + 1);
			else // xxx
				cout << arr[0] * arr[1] * arr[2];
	}

	return 0;
} 
