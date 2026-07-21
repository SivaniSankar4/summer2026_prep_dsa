#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
int main(){
    int n;//number of vertices
    int m;//number of edges
    cout<<"number of vertices:"<<endl;
    cin>>n;
    cout<<"number of edges:"<<endl;
    cin>>m;
    unordered_map<int,list<int>> adjlist;
    cout<<"enter edges(u,v):"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    cout<<"adjacency list:"<<endl;
    for(auto i:adjlist){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}