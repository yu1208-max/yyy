#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    while (cin >> a >> b&&(a!=0&&b!=0)) {
        int x = ceil(sqrt(a));
        int y = floor(sqrt(b));
        cout << y - x + 1 << endl;
    }
}