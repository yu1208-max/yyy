#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int c=1;
    while(cin>>t){
        bool b=true;
        vector<int>v;
        for(int i=0;i<t;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(x<1){
                b=false;
            }
            if(i>0&&v[i]<=v[i-1]){
                b=false;
            }
        }
        if(b){
            set<int>sum;
            for(int i=0;i<t;i++){
                for(int j=i;j<t;j++){
                    int a=v[i]+v[j];
                    if(sum.count(a)>0){
                        b=false;
                        break;
                    }else{
                        sum.insert(a);
                    }
                }
                if(!b){
                    break;
                }
            }
        }
        if(b){
            cout<<"Case #"<<c++<<": It is a B2-Sequence.\n\n";
        }else{
             cout<<"Case #"<<c++<<": It is not a B2-Sequence.\n\n";
        }
        
    }
}