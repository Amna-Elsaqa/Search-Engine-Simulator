//
//  Graph.cpp
//  SearchEngineProject
//
//  Created by Amna Hossam Elsaqa on 19/04/2022.
//

#include "Graph.hpp"

Graph::Graph(int V){
    N = V;
    adjLists = new vector<int>[N];
}
void Graph::createEdge(int src, int dest){
    adjLists[src].push_back(dest);
}
