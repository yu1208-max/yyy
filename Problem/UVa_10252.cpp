#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    while(getline(cin,a)&&getline(cin,b)){
        int arra[26]={0};
        int arrb[26]={0};
        for(char i:a){
            arra[i-'a']++;
        }
        for(char j:b){
            arrb[j-'a']++;
        }
        for(int i=0;i<26;i++){
            while(arra[i]--&&arrb[i]--){
                cout<<char(i+'a');
            }
        }
        cout<<endl;
    }
}