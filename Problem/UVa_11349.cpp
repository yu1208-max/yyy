#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int Case = 1;
	while (t--) {
		bool sy = true;
		char a, b;
		int n;
		cin >> a >> b >> n;
		long long arr[105][105];
		for (int i = 0; i < n; i++) {
			for(int j=0;j<n;j++){
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j]<0||arr[i][j] != arr[n - 1 - i][n - 1 - j]) {
					sy = false;
					break;
				}
			}
		}
		if (sy) {
			cout << "Test #"<<Case++<<": "<<"Symmetric.\n";
		}
		else {
			cout << "Test #" << Case++ << ": " << "Non-symmetric.\n";
		}
	}
}