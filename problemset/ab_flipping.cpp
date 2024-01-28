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
        string s;
		cin >> s;
		
		int count = 0;
		vi arr;
		FOR(i, N-1)	arr.PB(i);
		
		while (!arr.empty()) {
			int toDelete = -1;
			FOR(i, arr.size()) {
				int index = arr[i];
				if (s[index] == 'A' && s[index+1] == 'B') {
					swap(s[index], s[index+1]);
					toDelete = index;
					count ++;
					break;
				}
			}
			arr.erase(find(arr.begin(), arr.end(), toDelete));
		}
		cout << count << endl;
    } 
    return 0; 
} 
