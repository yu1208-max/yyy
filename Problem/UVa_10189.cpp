#include<bits/stdc++.h>

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1}; 
using namespace std;
int main() {
	int m, n;
	int counter = 1;
	bool first = true;
	while (cin >> m >> n&&m!=0&&n!=0) {
		if (!first) {
			cout << endl;
		}
		first = false;
		cout << "Field #" << counter << ":" << endl;
		counter++;
		char arr[105][105];
		int counter[105][105] = { 0 };
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == '*') {
					for (int k = 0; k < 8; k++) {
						int nx = i + dx[k];
						int ny = j + dy[k];
						if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
							counter[nx][ny]++;
						}
						
					}
				}
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == '*') {
					cout << '*';
				}
				else {
					cout << counter[i][j];
				}
			}
			cout << endl;
		}
		
	}
}