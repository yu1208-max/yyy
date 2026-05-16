#include<bits/stdc++.h>
using namespace std;

void solve(long long a){
    if(a>=10000000){
        solve(a/10000000);
        cout<<" kuti";
        a%=10000000;
    }
    if(a>=100000){
        solve(a/100000);
        cout<<" lakh";
        a%=100000;
    }
    if(a>=1000){
        solve(a/1000);
        cout<<" hajar";
        a%=1000;
    }
    if(a>=100){
        solve(a/100);
        cout<<" shata";
        a%=100;
    }
    if(a>0){
        cout<<" "<<a;
    }
}


int main(){
    long long n;
    int t=1;
    while(cin>>n){
        cout<<setw(4)<<t<<".";
        t++;
        if(n==0){
            cout<<" 0";
        }else{
            solve(n);
        }
        cout<<"\n";
    }
}