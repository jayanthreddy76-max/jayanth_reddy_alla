#include <bits/stdc++.h>
using namespace std;

int dx[4]={1, -1, 1, -1};
int dy[4]={1, -1, -1, 1};

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        set<pair<int>> sk,sq;
        for(int i=0;i<4;i++){
            sk.insert( (xk + dx[i]*a), (yk + dy[i]*b));
            sk.insert( (xk + dx[i]*b), (yk + dy[i]*a));

            sq.insert( (xq + dx[i]*a), (yq + dy[i]*b));
            sq.insert( (xq + dx[i]*b), (yq + dy[i]*a));
        }
        int count=0;
        for(auto x:sk){
            for(auto y:sq){
                if(x.first == y.first && x.second == y.second)
                count++;
            }
        }
        cout<<count<<endl;
    }
}