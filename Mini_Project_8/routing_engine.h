/* 
routing_engine.h
Declares the RoutingEngine class, along with the Edge and Node structs
used to build the network graph in memory.

By: Charles Wan
EECE 2140 - Professor Nafa
16 April, 2026
*/

#ifndef ROUTING_ENGINE_H
#define ROUTING_ENGINE_H

#include <vector>
#include <string>
#include <memory>

// one directed connection between two nodes
struct Edge {
    int to;
    double bandwidth;
};

// a single point in the network with a list of outgoing connections
struct Node {
    int id;
    std::vector<Edge> edges;
};

class RoutingEngine {
private:
    std::vector<std::unique_ptr<Node>> nodes; // engine owns all nodes
    int numNodes;

    // helper that does the actual searching - called by findPath
    bool dfs(int curr, int dest, double minBW,
             std::vector<bool>& visited, std::vector<int>& path);

public:
    RoutingEngine(int n);

    void loadFromFile(const std::string& filename);
    void printGraph() const;
    std::vector<int> findPath(int source, int dest, double minBW);
};

#endif