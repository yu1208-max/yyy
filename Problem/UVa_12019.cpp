#include<bits/stdc++.h>
using namespace std;
int main(){
    int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int t;
    cin>>t;
    while(t--){
        int m,d;
        cin>>m>>d;
        int sum=0;
        for(int i=0;i<m-1;i++){
            sum+=y[i];
        }
        sum+=d;
        if(sum%7==1){
            cout<<"Saturday"<<endl;
        }else if(sum%7==2){
            cout<<"Sunday"<<endl;
        }else if(sum%7==3){
            cout<<"Monday"<<endl;
        }else if(sum%7==4){
            cout<<"Tuesday"<<endl;
        }else if(sum%7==5){
           cout<<"Wednesday"<<endl;
        }else if(sum%7==6){
            cout<<"Thursday"<<endl;
        }else{
            cout<<"Friday"<<endl;
        }
        
    }
    
}