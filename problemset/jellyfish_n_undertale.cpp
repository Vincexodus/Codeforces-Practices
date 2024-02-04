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
    
	int t; 
	cin >> t; 
    
	while (t--) { 
        ll a, b, n, count = 0; 
        cin >> a >> b >> n;

		count = b;
		FOR(i, n) {
			ll x;
			cin >> x;
			count += min(a-1, x);
		}
		cout << count << endl;
    } 
    return 0; 
} 
