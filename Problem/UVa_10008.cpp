#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    int counter[26]={0};
    char a[26];
    for(int i=0;i<26;i++){
        a[i]=i+'A';
    }
    while(n--){
        string s;
        getline(cin,s);
      for(char&a:s){
        if(isalpha(a)){
            a=toupper(a);
            counter[a-'A']++;
        }
      }
    }
    for(int i=0;i<26;i++){
        for(int j=i+1;j<26;j++){
            if(counter[j]>counter[i]||counter[i]==counter[j]&&a[j]<a[i]){
                swap(counter[i],counter[j]);
                swap(a[i],a[j]);

            }
        }
    }
    for(int i=0;i<26;i++){
        if(counter[i]!=0){
            cout<<a[i]<<" "<<counter[i]<<endl;
        }
    }
}
