#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int m, n, q;
		cin >> m >> n >> q;
		cout << m << " " << n << " " << q << endl;
		char sq[105][105];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> sq[i][j];
			}
		}
		while (q--) {
			int x, y;
			cin >> x >> y;
			int r = 1;
			bool  ok = true;
			while (ok) {
				for (int i = x - r; i <= x + r; i++) {
					for (int j = y - r; j <= y + r; j++) {
						if (i >= 0 && i < m && j>=0&&j<n&&sq[i][j]==sq[x][y]) {
							
						}
						else {
							ok = false;
							break;
						}
					}
				}
				if (ok) {
					r++;
				}
					
				
					
				
			}
			cout << (r-1)*2+1 << endl;
		}
	}
}