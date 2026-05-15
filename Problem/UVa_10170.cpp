#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s,d;
    while(cin>>s>>d){
    while(d>s){
        d-=s;
        s++;
    }
    cout<<s<<endl;
    }
}