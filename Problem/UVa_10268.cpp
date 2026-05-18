#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,a;
    while(cin>>x){
        long long b=0,c=0;
        while(cin>>a){
            c=x*c+b;
            b=x*b+a;
            if(getchar()=='\n'){
                break;
            }
        }
        cout<<c<<endl;
    }
}