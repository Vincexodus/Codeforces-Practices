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
        int a, b, c; 
        cin >> a >> b >> c;
		
		int mini = min({a, b, c});

		if (a == b && b == c) {
			cout << "YES" << endl;
		} else if (a % mini == 0 && b % mini == 0 && c % mini == 0 && ((a/mini) + (b/mini) + (c/mini ) -3 <= 3)) {
			cout << "YES" << endl;
		} else
			cout << "NO" << endl;
		
     } 
    return 0; 
} 
