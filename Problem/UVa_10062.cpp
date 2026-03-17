#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	
	string s;
	bool first = true;
	while (getline(cin, s)) {
		if (!first) {
			cout << endl;
		}
		first = false;
		int counter[128] = { 0 };
		int arr[128];
		int n = 0;
		for (char a : s) {
			counter[a]++;
		}
		for (int i = 0; i < 128; i++) {
			if (counter[i] > 0) {
				arr[n++] = i;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (counter[arr[i]] > counter[arr[j]] || (counter[arr[i]] == counter[arr[j]] && arr[i] < arr[j]) ){
					swap(arr[i], arr[j]);
				}
			}
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " " << counter[arr[i]] << endl;
		}
	}
}