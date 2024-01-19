#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	n++;
	const char* arr = to_string(n).c_str();
		
	while((arr[0] == arr[1]) || (arr[0] == arr[2]) || (arr[0] == arr[3]) 
			|| (arr[1] == arr[0]) || (arr[1] == arr[2]) || (arr[1] == arr[3])
			|| (arr[2] == arr[0]) || (arr[2] == arr[1]) || (arr[2] == arr[3])
			|| (arr[3] == arr[0]) || (arr[3] == arr[2]) || (arr[3] == arr[1])
			) {
		n++;
		arr = to_string(n).c_str();
	}
	cout << n << endl;
	return 0;
}
