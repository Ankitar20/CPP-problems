// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int m;
//     cin>>n>>m;
//     int cnt=0;
//     vector<vector<int>>adj(n);
//     vector<int>indeg(n,0);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         indeg[v]++;

//     }
//     queue<int>pq;
//     for(int i=0;i<n;i++){
//   if(indeg[i]==0){
//     pq.push(i);
//   }
//     }
//     while(!pq.empty()){
//         cnt++;
//         int x=pq.front();
//         pq.pop();
//         cout<<x<<" ";
//         for(auto it: adj[x]){
//             indeg[it]--;
//             if(indeg[it]==0)
//             pq.push(it);

//                         }
//     }
// }
// cycle is present in undirected array or not
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent)
{
    visited[src] = true;
    for (auto i : adj[src])
    {
        if (i != parent)
        {
            if (visited[i]){
                return true;
                if(!visited[i] and iscycle(i,adj,visited,src))
                return true;
            }
        }
    }
    return false;

}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>adj(n);
   for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
      adj[v].push_back(u);
   }
   bool cycle=false;
   vector<bool>visited(n,false);
   for(int i =0;i<n;i++){
    if(!visited[i] and iscycle(i,adj,visited,-1)){
        cycle=true;

    }
   }
if(cycle)
cout<<"Cycle is prsent";
else{
    cout<<"Cycle is not present";

}

















}