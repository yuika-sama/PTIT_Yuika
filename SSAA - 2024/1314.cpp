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
int a[1005];
int n;
void print_(int i){
	cout << '(';
	for (int j=1; j<i; j++){
		cout << a[j] << ' ';
	}
	cout << a[i] << ") ";
}
void Try(int index, int last, int sum){
	for (int i=last; i>=1; i--){
		if (i + sum <= n){
			a[index] = i;
			sum += i;
			if (sum == n){
				print_(index);
			} else Try(index+1, i, sum);
			sum -= i;
		}
	}
} 

void solve(){
	/*hav fun with coding*/
	cin >> n;
	memset(a, 0, sizeof(a));
	Try(1, n, 0);
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