#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	map<string, int>mp;
	while (t--) {
		
		string c;
		string n;
		cin >> c;
		mp[c]++;
		getline(cin, n);
		
	}
	for (auto a : mp) {
		cout << a.first << " " << a.second << endl;
	}
}