#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		double p;
		int n,m;
		cin >> n>>p >> m;
		if (p == 0.0) {
			cout << "0.0000" << endl;
			continue;
		}
		double ans = pow(1 - p, m - 1) * p;
		double k = 1 - pow(1 - p, n);
		cout << fixed << setprecision(4) << ans / k << endl;
	}
}