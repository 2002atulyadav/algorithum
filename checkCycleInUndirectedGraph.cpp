#include<bits/stdc++.h>
using namespace std;
bool vis[500001];
vector<vector<int>>vec;

// this will return the true for cycle false for not cycle and we can also count the number of backage and nodes 
bool dfs(int node, int par){
    vis[node]=1;
    for(auto x:vec){
        if(vis[x]==0){
            if(dfs(x, node))
               return true;
        }
        else{
            if(x == par){
                return true;
            }
        }

    }
    return false;
}
