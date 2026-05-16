#include<bits/stdc++.h>
using namespace std;
int main(){
    double s,a;
    string b;
    while(cin>>s>>a>>b){
        if(b=="min"){
            a/=60;
        }
        if(a>180){
            a=360-a;
        }
        a=a*(acos(-1.0)/180);
        cout<<fixed<<setprecision(6)<<(6440+s)*a<<" "<<fixed<<setprecision(6)<<2*(6440+s)*sin(a/2)<<endl;
    }
}