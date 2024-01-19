#include <iostream>

using namespace std;

void swap(char &a, char &b) {
	char temp = a;
	a = b;
	b = temp;
}

int main() {
	int n, t;
	cin >> n >> t;
	cin.ignore();

	char array[n + 1];

	cin.getline(array, n + 1);

	for (int a=0; a<t; a++) {
		cout << endl;
		for (int i=0; i<n; i++) {
			if (array[i] == 'B' && array[i+1] == 'G') {
				swap(array[i], array[i+1]);
				i++;
			}
		}
	}
	

	cout << array << endl;
	return 0;
}
