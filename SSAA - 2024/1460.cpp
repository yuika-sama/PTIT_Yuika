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
bool palin(string s){
	for (int i=0; i<s.sz / 2; i++){
		if (s[i] != s[s.sz - i - 1]){
			return false;
		}
	}
	return true;
}
void solve(){
	/*hav fun with coding*/
	string s; cin >> s;
	int n = s.sz;
	if (palin(s)){
		cout << 0;
		return;
	}
	string tmp  =s;
	reverse(al(tmp));
	int f[41][41] = {};
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (s[i-1] == tmp[j-1]) f[i][j] = f[i-1][j-1]+1;
			else f[i][j] = max(f[i][j-1], f[i-1][j]);
		}
	}
	cout << n - f[n][n];
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