//
//  Graph.hpp
//  SearchEngineProject
//
//  Created by Amna Hossam Elsaqa on 19/04/2022.
//

#ifndef Graph_hpp
#define Graph_hpp
#include <stdio.h>
#include<vector>
using namespace std;
struct  edge{
    int source;
    int destination;

};

class Graph{
public:
    int N;
    vector<int> *adjLists;
public:
    Graph(int V);
    void createEdge(int src, int dest);
};
#endif /* Graph_hpp */
