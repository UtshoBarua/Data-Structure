#include<bits/stdc++.h>
using namespace std;

vector<int>graph[50];
bool visited[50];
void dfs(int source){
    visited[source] = 1;
    for(int i=0; i<graph[source].size(); i++){
        int next = graph[source][i];
        if(visited[next]==0){
            dfs(next);
        }


    }


}


int main()
{

    int node,edges;
    cin>>node>>edges;
    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(3);
    for(int i=0; i<node; i++){
        if(visited[i]==1){
            cout<<"node "<<i<< " is visited"<<endl;
        }
        else cout<<"node "<<i<<" is not visited"<<endl;
    }

}
