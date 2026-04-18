/* 
routing_engine.cpp
Builds a network graph from a file and searches it for a path
that meets a minimum bandwidth using DFS.

By: Charles Wan
EECE 2140 - Professor Nafa
16 April, 2026
*/

#include "routing_engine.h"
#include <iostream>
#include <fstream>

using namespace std;

// set up n empty nodes and store them
RoutingEngine::RoutingEngine(int n) : numNodes(n) {
    for (int i = 0; i < n; i++) {
        auto node = make_unique<Node>();
        node->id = i;
        nodes.push_back(move(node));
    }
}

// read each line of the file and add an edge between the two nodes
void RoutingEngine::loadFromFile(const string& filename) {
    ifstream file(filename);
    int u, v;
    double bw;
    while (file >> u >> v >> bw) {
        nodes[u]->edges.push_back({v, bw});
    }
    file.close();
}

// print every node and its outgoing connections
void RoutingEngine::printGraph() const {
    for (auto& node : nodes) {
        cout << "Node " << node->id << ": ";
        for (auto& e : node->edges) {
            cout << "-(" << e.bandwidth << ")-> " << e.to << "  ";
        }
        cout << endl;
    }
}

// move to the next node if it hasnt been visited and the bandwidth is high enough
bool RoutingEngine::dfs(int curr, int dest, double minBW,
                        vector<bool>& visited, vector<int>& path) {
    visited[curr] = true;
    path.push_back(curr);

    if (curr == dest) return true; // made it to the destination

    for (auto& edge : nodes[curr]->edges) {
        if (!visited[edge.to] && edge.bandwidth >= minBW) {
            if (dfs(edge.to, dest, minBW, visited, path))
                return true;
        }
    }

    path.pop_back(); // dead end - step back and try another way
    return false;
}

// kick off the search and print the result
vector<int> RoutingEngine::findPath(int source, int dest, double minBW) {
    vector<bool> visited(numNodes, false); // track which nodes we've been to
    vector<int> path;

    if (dfs(source, dest, minBW, visited, path)) {
        cout << "Path found (min BW >= " << minBW << "): ";
        for (int i = 0; i < (int)path.size(); i++) {
            cout << path[i];
            if (i < (int)path.size() - 1) cout << " -> ";
        }
        cout << endl;
    } else {
        cout << "No feasible path found." << endl;
    }

    return path;
}