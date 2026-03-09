#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    vector<string> v;
    while(getline(cin,s)){
        v.push_back(s);
    }
    int length=0;
    for(int i=0;i<v.size();i++){
        if(v[i].size()>length){
            length=v[i].size();
        }
    }
    for(int i=0;i<length;i++){
        for(int j=v.size()-1;j>=0;j--){
            if(i<v[j].size()){//這裡有卡住
            cout<<v[j][i];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}