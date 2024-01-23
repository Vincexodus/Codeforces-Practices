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

int main() { 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    
	int T; 
    cin >> T; 
    
	while (T--) { 
		string s;
		cin >> s;
		
		int count = 0;
		int n = s.size();

		ll a[2] = { 0, 0 };
		
		// optimal would be inverse of string
		FOR(i, n) {
			// index 1 if '1' - '0'
			// index 0 if '0' - '0'
			a[s[i] - '0']++;
		}
		FOR(i, n) {
			// 1 or 0 still remains, decrease value in arr 
			if (a[!(s[i] - '0')] > 0) {
				a[!(s[i] - '0')] --;
			} else { // if arr is empty, output numbers of value to del1
				count = n - i;
				break;
			}
		}
		cout << count << endl;
    }
    return 0; 
} 
