#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,p;
		cin >> n>>p;
		vector<int>v(p);
		for (int i = 0; i < p; i++) {
			cin >>  v[i];
		}
		vector<bool>strike(n + 1, false);
		for (int i = 0; i < p; i++) {
			for (int day = v[i]; day <= n; day += v[i]) {
				if (day % 7 == 6 || day % 7 == 0) {
					continue;
				}
				strike[day] = true;
			}
			
		}
		int ans = 0;
		for (int i = 1; i <=n; i++) {
			if (strike[i]) {
				ans++;
			}
		}
		cout << ans << endl;
	}
}