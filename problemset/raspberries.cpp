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
        int n, k, e = 0, count = 1e9; 
        cin >> n >> k;
		int a;
		int total = 0;

		FOR(i, n) {
			cin >> a;
			if (a % k == 0)
				count = 0;
			if (a % 2 == 0)
				e ++;
			count = min(count, k-a%k);
		}
		
		if (k==4)
			count = min(count, max(0, 2 - e));

		cout << count << endl;
    } 
    return 0; 
} 
