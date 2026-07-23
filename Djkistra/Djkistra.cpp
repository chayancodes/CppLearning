// Dijkistra's pathfinder
// claude roadmap
// task1: Graph structure - done
// task2: Priority Queue Setup
// task3: Core Dikjistra loop
// task4: Parent map for path reconstruction
// task5: Output layer

// have to redo. Concept not clear. Complete in python first


#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

//addEdge is a wrapper so the inside line doesnt look weird. Can remove if needed, but then have to replace it
void addEdge(unordered_map<int, vector<pair<int,int>>>& graph, int u, int v, int w) {
    graph[u].push_back({v, w});
    // directed, so do NOT add graph[v].push_back({u, w})
}; 

int main() {
    //Graph:
    unordered_map<int,vector<pair<int,int>>> graph;

    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 2, 1);
    addEdge(graph, 2, 1, 2);
    addEdge(graph, 1, 3, 1);
    addEdge(graph, 2, 3, 5);
    addEdge(graph, 3, 4, 3);
    addEdge(graph, 4, 5, 2);
    addEdge(graph, 5, 6, 1);
    addEdge(graph, 3, 6, 9);
    addEdge(graph, 1, 5, 7);
    //graph end

    //min-heap:
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    //distance array:
    int n=7; //max depth, 7 because nodes 0-6
    vector<int> dist(n, INT_MAX);
    //Parent map to reconstruct path
    vector<int> parent(n, -1);

    //source node:
    int src=0; //source node
    dist[src]=0;
    pq.push({0,src});

    //temp code to check if graph display is correct
    for (auto& [node, edges] : graph) {
        std::cout << node << " -> ";
        for (auto& [neighbor, weight] : edges)
            std::cout << "(" << neighbor << ", w=" << weight << ") ";
        std::cout << "\n";
    };

    //main djkistra loop:
    while (!pq.empty()) {
        auto [d,u]=pq.top();
        pq.pop();
    }
}