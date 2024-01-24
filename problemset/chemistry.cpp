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
        int n, k; 
        cin >> n >> k;
		string s;
		cin >> s;

		int count = 0;
		map<char, int> m;
		FOR(i, s.size())
			m[s[i]]++;
		
		// char with even occurence can be ignored
		for(auto i: m)
			if (i.second&1) count ++;
		
		// two diff char with odd occurence
		if (count-1 <= k)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
    } 
    return 0; 
} 
