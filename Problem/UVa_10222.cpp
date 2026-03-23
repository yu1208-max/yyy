#include <bits/stdc++.h>

using namespace std;
 int main() {
     string s;
     string c = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
     while (getline(cin, s)) {
         for (char& a : s) {
             a = tolower(a);
         }
         for (char a : s) {
             for (int i = 0; i < c.size(); i++) {
                 if (a == c[i]) {
                     cout << c[i - 2];
                 }
                 
            }
             if (a == ' ') {
                 cout << " ";
                 }
         }
         cout << endl;
     }

 }

