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
        int a, b, kx, ky, qx, qy; 
        int count = 0;
		cin >> a >> b;
		cin >> kx >> ky;
		cin >> qx >> qy;

		vector <pair<int, int>> king;
		vector <pair<int, int>> queen;
		
		king.PB({kx + a, ky + b});
		king.PB({kx + a, ky - b});
		king.PB({kx - a, ky + b});
		king.PB({kx - a, ky - b});

		king.PB({kx + b, ky + a});
		king.PB({kx + b, ky - a});
		king.PB({kx - b, ky + a});
		king.PB({kx - b, ky - a});

		queen.PB({qx + a, qy + b});
		queen.PB({qx + a, qy - b});
		queen.PB({qx - a, qy + b});
		queen.PB({qx - a, qy - b});
		
		queen.PB({qx + b, qy + a});
		queen.PB({qx + b, qy - a});
		queen.PB({qx - b, qy + a});
		queen.PB({qx - b, qy - a});

		set<pair<int, int>> set1(king.begin(), king.end());
		set<pair<int, int>> set2(queen.begin(), queen.end());
		
		for (const auto& element : set1) {
			if (set2.find(element) != set2.end()) {
				count++;
			}
		}
		cout << count << endl;
    } 
    return 0; 
} 
