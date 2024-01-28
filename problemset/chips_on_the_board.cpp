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
        int n, count = 0;

        cin >> n;
		
		vector <ll> row(n), col(n);

		for (auto& x : row) cin >> x;
		for (auto& x : col) cin >> x;

		ll mnRow = *min_element(row.begin(), row.end());
		ll sRow = accumulate(row.begin(), row.end(), 0LL);
		ll mnCol = *min_element(col.begin(), col.end());
		ll sCol = accumulate(col.begin(), col.end(), 0LL);
		ll ans = min(mnRow * n + sCol, mnCol * n + sRow);
		cout << ans << endl;
    } 
    return 0; 
} 
