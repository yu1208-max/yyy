#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int v=0;
        int sum=0;
        int maxdigit=1;
        bool f=false;
        for(char a:s){
            if(a>='0'&&a<='9'){
                v=a-'0';
            }else if(a>='A'&&a<='Z'){
                v=a-'A'+10;
            }else if(a>='a'&&a<='z'){
                v=a-'a'+36;
            }else{
                continue;
            }
            sum+=v;
            if(v>maxdigit){
                maxdigit=v;
            }
        }
        for(int i=maxdigit;i<62;i++){
            if(sum%i==0){
                cout<<i+1<<endl;
                f=true;
                break;
            }
        }
        if(!f){
            cout<<"such number is impossible!\n";
        }

          
    }
}