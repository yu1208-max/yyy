#include<bits/stdc++.h>
using namespace std;
bool fall[55][55];
map<int,pair<int,int>>mp={{0,{0,1}},{1,{1,0}},{2,{0,-1}},{3,{-1,0}}};
char f[4]={'N','E','S','W'};
int main(){
    int mx,my;
    int x,y,z;
    char k;
    cin>>mx>>my;
    while(cin>>x>>y>>k){
        int los=0;
        if(k=='N')z=0;
        if(k=='E')z=1;
        if(k=='S')z=2;
        if(k=='W')z=3;
        string s;
        cin>>s;
        for(char i:s){
            int nx=x;
            int ny=y;
            if(i=='R')z=(z+1)%4;
            if(i=='L')z=(z+3)%4;
            if(i=='F'){
                nx+=mp[z].first;
                ny+=mp[z].second;
            }
            if(nx<0||ny<0||nx>mx||ny>my){
                if(!fall[x][y]){
                    fall[x][y]=1;
                    los=1;
                    break;
                }
            }else{
                x=nx;
                y=ny;
            }
        }
        cout<<x<<" "<<y<<" "<<f[z];
        if(los){
            cout<<" LOST";
        }
        cout<<endl;
    }

}