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
#define debug(a) cout << a << endl;

int main() { 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    
	int T; 
    cin >> T; 
    
	while (T--) { 
   
		string s, a; 
        cin >> s;

		vector <int> upper, lower;
		string result = "";

		FOR(i, s.size()) {
			if (s[i] == 'b') {
				s[i] = ' ';
				if (!lower.empty()) {
					s[lower.back()] = ' ';
					lower.pop_back();
				}
				continue;
			}
			if (s[i] == 'B') {
				s[i] = ' ';
				if (!upper.empty()) {
					s[upper.back()] = ' ';
					upper.pop_back();
				}
				continue;
			}
			if ('a' <= s[i] && s[i] <= 'z')
				lower.push_back(i);
			else
				upper.push_back(i);
		}

		FOR(i, s.size()) {
			if (s[i] != ' ')
				cout << s[i];
		}
		cout << endl;
    } 
    return 0; 
} 
