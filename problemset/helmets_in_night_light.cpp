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
        ll n, p, count = 0; 
        cin >> n >> p;

		vector <pair<ll, ll>> residents(n);

		FOR(i, n) cin >> residents[i].first;
		
		FOR(i, n) {
			ll in;
			cin >> in;
			residents[i].second = min(p, in);
		}

		sort(residents.begin(), residents.end(), [](const auto &a, const auto &b) {
			return a.second < b.second;
		});

		count = p;
		ll rem = n-1;
		FOR(i, n-1) {
			count += min(residents[i].first, rem) * residents[i].second;
			rem -= min(residents[i].first, rem);
		}
		cout << count << endl;
    } 
    return 0; 
} 
