#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	while (cin >> t) {
		vector<int>arr(t);
		for (int i = 0; i < t; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int mid1 = arr[(t-1) /2];
		int mid2 = arr[t / 2];
		int ans = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == mid1 || arr[i] == mid2) {
				ans++;
			}
		}
		cout << mid1 << " " << ans << " " << mid2 - mid1 + 1 << endl;
	}
}