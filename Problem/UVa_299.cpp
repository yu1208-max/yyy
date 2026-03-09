#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int counter = 0;
        int n;
        int arr[50];

        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i]) {
                    swap(arr[i], arr[j]);
                    counter++;
                }
            }
        }
        cout << "Optimal train swapping takes " << counter << " swaps." << endl;
    }
}