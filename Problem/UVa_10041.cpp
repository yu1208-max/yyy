#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int renum;
		cin >> renum;
		vector<int>arr(renum);
		for (int i = 0; i < renum; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int vito = arr[renum / 2];
		int dis = 0;
		for (int i = 0; i < renum; i++) {
			dis += abs(vito - arr[i]);
		}
		cout << dis << endl;
	}
}