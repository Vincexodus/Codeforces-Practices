#include "bits/stdc++.h" 

using namespace std; 

#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

bool isValid(int i, int j) {
	return abs(i/3 - j/3) <= 1 && abs(i%3 - j% 3) <= 1;
}

int main() { 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
	
	char arr[10];
	cin >> arr >> arr+3 >> arr+6;
	
	string sword = "DDD";

	FOR(i,9)
		FOR(j, 9)
			FOR(k, 9) {
				if (i != j && j != k && k != i && isValid(i,j) && isValid(j, k)) {
					string word = "";
					word += arr[i];
					word += arr[j];
					word += arr[k];
					sword = min(sword, word);
				}
		}
	cout << sword << endl;
    return 0; 
} 
