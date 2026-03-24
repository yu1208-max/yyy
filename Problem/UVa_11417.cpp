#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b) {
	while (a % b) {
		a = a % b;
		swap(a, b);
		
	}
	return b;
}
int main() {
	int n;
	while (cin >> n && n != 0) {
		int ans = 0;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans += GCD(i, j);
			}
		}
		cout << ans << endl;
	}
}