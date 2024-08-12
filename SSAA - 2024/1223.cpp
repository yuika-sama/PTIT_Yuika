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
	int n, m; 
	cin >> n >> m;
	vector<vector<int>> a(n+1, vector<int>(n+1, 1e9));
	for (int i=1; i<=n; i++) a[i][i] = 0;
	while(m--){
		int x, y;
		cin >> x >> y;
		a[x][y] = 1;
	}

	for (int k=1; k<=n; k++){
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
			}
		}
	}
	int sum = 0, cnt = 0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (i != j and a[i][j] != 1e9){
				sum += a[i][j];
				cnt++;
			}
		}
	}
	double res = 1.0 * sum/cnt;
	cout << precision(2) << res;
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