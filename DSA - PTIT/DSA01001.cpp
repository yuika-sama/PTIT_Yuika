#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string x;
		cin >> x;
		int n = x.size();
		bool check = false;
		for (int i=n-1; i>=0; i--){
			if (x[i] == '1'){
				x[i] = '0';
			} else{
				x[i] = '1';
				check = true;
				break;
			}
		}
		if (!check){
			for (int i=0; i<n; i++) cout << 0;
		} else {
			cout << x;
		}
		cout << endl;
	}
}