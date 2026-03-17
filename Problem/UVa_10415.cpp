#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<char,string>mp;
mp['c'] = { "0111001111" };
mp['d'] = { "0111001110" };
mp['e'] = { "0111001100" };
mp['f'] = { "0111001000" };
mp['g'] = { "0111000000" };
mp['a'] = { "0110000000" };
mp['b'] = { "0100000000" };
mp['C'] = { "0010000000" };
mp['D'] = { "1111001110" };
mp['E'] = { "1111001100" };
mp['F'] = { "1111001000" };
mp['G'] = { "1111000000" };
mp['A'] = { "1110000000" };
mp['B'] = { "1100000000" };
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int counter[10]={0};
        bool now[10]={false};
        for(char a:s){
            for(int i=0;i<10;i++){
                if(now[i]==false&&mp[a][i]=='1'){
                    counter[i]++;
                }
                if(mp[a][i]=='1'){
                    now[i]=true;
                }
                if(mp[a][i]=='0'){
                    now[i]=false;
                }
            }
        }
            for(int i=0;i<10;i++){
                cout<<counter[i];
                if(i<9){
                cout<<" ";
            }
           
}
 cout<<endl;
    }
}