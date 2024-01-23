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
        int N; 
        cin >> N; 
		cin.ignore();
		string s;
		getline(cin, s);

		if (N == 2) {
			cout << s << endl;
			continue;
		}

		s += "x";
		FOR(i, N) {
			if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd')) {
				if (s[i+1] == 'a' || s[i+1] == 'e') {
					if (s[i+2] == 'b' || s[i+2] == 'c' || s[i+2] == 'd') {
						if (s[i+3] == 'a' || s[i+3] == 'e') {
							cout << s[i] << s[i+1];
							i++; 
						} else {cout << s[i] << s[i+1] << s[i+2];
							i+=2; 
						} 
						if (i+1 != N) 
							cout << '.';
						
						if (s[i+3] == 'x') {
							s.pop_back();
							cout << s.substr(N-2);
							break;
						}
					} else 
						continue;
				} else 
					continue;
			}
			
		}
		cout << endl;
    } 
    return 0; 
} 
