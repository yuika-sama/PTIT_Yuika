#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define sz size()
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s;
		getline(cin >> ws, s);
		int n; cin >> n;
		ll gone = 0;
		ll a;
		for (int i = 0; i<n; i++){
			cin >> a;
			if (a<0){
				gone+=a;
			}
		}
		if (gone <= -100000000){
			cout << "YES" << endl;
		} else cout << "NO" << endl;
	}
}