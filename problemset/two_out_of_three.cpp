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
		int n;
		cin >> n;

		vi v(n), b(n, 1);
		bool c1=false, c2=false;
		map<int, int> mp;
		
		FOR(i, n) {

			cin >> v[i];
			mp[v[i]]++;
			if(mp[v[i]]== 2 && !c1) {
				b[i] = 2;
				c1 = !c1;
			} else if(mp[v[i]]==2 && !c2){
				b[i] = 3;
				c2 = !c2;
			}
		}

		if (!c1 || !c2)
			cout << -1;
		else
			for(auto it: b)
				cout << it << " ";
	
		cout << endl;
    } 
    return 0; 
} 
