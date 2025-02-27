#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sqr(x) x*x
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+7;

//end of template

void solve(){
	/*hav fun with coding*/
	int a, b; cin >> a >> b;
	if (a>b) cout << -1; else {
		int max_sum = 9 * to_string(b).length();
		vector<vector<int>> f(b+1, vector<int>(max_sum+1, -1));
		for(int i=1; i<=b; i++){
			for( int j=1; j<=max_sum; j++){
				if (i == 1){
					f[i][j] = j;
				} else {
					for (int k=0; k<=9; k++){
						if (j - k >= 0 and f[i-1][j-k] != -1){
							if (f[i][j] == -1){
								f[i][j] = k + f[i-1][j-k];
							} else {
								f[i][j] = min(f[i][j], k + f[i-1][j-k]);
							}
						}
					}
				}
			}
		}
		bool check = false;
		for (int i=1; i<=max_sum; i++){
			if (f[a][i] == b){
				cout << i;
				check = true;
				break;
			}
		}
		if (!check) cout << -1;
	}
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}