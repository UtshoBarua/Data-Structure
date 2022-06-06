#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100];

void printList(vector<int>graph[],int n){
    cout<<"The Graph Is:"<<endl;
    for(int i=0; i<n; i++){
        cout<<"i->:";
        for(int j=0; j<graph[i].size(); j++){
            cout<<graph[i][j]<<" ";
        }

    cout<<endl;
    }


}

int main(){
    int node,edges;
    cin>>node>>edges;
    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);


    }
    printList(graph,10);

}
