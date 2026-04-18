/* 
main.cpp
Entry point for the Network Routing Engine. Loads the graph from a file
and searches for paths with different bandwidth requirements.

By: Charles Wan
EECE 2140 - Professor Nafa
16 April, 2026
*/

#include <iostream>
#include "routing_engine.h"

using namespace std;

int main() {
    RoutingEngine engine(6); // 6 nodes (0-5)
    engine.loadFromFile("network.txt");

    cout << "=== Network Topology ===" << endl;
    engine.printGraph();

    cout << endl;
    cout << "=== Finding paths ===" << endl;
    engine.findPath(0, 5, 50);   // S=0, T=5, min BW=50
    engine.findPath(0, 5, 100);  // higher bandwidth requirement
    engine.findPath(0, 5, 200);  // impossible

    return 0;
}