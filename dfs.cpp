#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
bool checkCycleDFS(int node,unordered_map<int,bool>&visited,unordered_map<int,bool>&dfsvisited,
unordered_map<int,list<int>>&adj){
    visited[node]=true;
    dfsvisited[node]=true;
    for (auto neighbour:adj[node]){
         if(!visited[neighbour]){
            bool cycledetected=checkCycleDFS(neighbour,visited,dfsvisited,adj);
            if(cycledetected)
              return true;

         }
         else if(dfsvisited[neighbour]){

            return true;
    
    }
    
    }
    dfsvisited[node]=false;
    return false;
}
int detetctCycleInDirectedGraph(int n, vector<pair<int,int>>&edges){
  unordered_map<int,list<int>>adj;
  for(int i=0;i<edges.size();i++){
    int u=edges[i].first;
    int v=edges[i].second;

    adj[u].push_back(v);

  }
    //calll for dfs
   unordered_map<int, bool>visited;
   unordered_map<int,bool>dfsvisited;
   for(int i=1;i<=n;i++){
    if(!visited[i]){
        bool cycleFound=checkCycleDFS(i,visited,dfsvisited,adj);
        if (cycleFound)
        return true;

    }
   }

return false;
}
