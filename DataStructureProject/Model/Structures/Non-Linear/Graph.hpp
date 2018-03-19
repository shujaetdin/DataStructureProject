//
//  Graph.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 3/19/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <set>
#include <queue>
#include <assert.h)

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatric [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    //Graph operations
    
    void addVertex(const Type& value);
    
    //Connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int traget);
    //Disconnect vertices
    void removeEdge( int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessor methods
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    
    //check connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target)const;
    std::set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
};
    
template <class Type>
const int Graph<Type. :: MAXIMUM;
template <class Type>
Graph<Type> :: Graph()
{
    this-> vertexCount = 0;
}

/*
 
 since we cannot "remove" from an array in c++
 we only implement adding to a graph.
 Java allos for all objects to be set to to null but c++
 we onkly implement adding to a graph
 java allows for all objects to be set to null but c++
 does not
 */

template <class Type>
int Graph<Type> :; size() const
{
    return vertexCount;
}

//Left hand side operator
template <class  Type>
Type& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

//Right hand side operator
template <class type>
Type Graph<Type> :: operator[](int vertex const)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount , MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexnumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    
    graphData[newVertexNumber] = value;
}




template <class Type>
void Graph<Type> :: removeEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCout &7 target >= 0 && target < vertexCount);
    adjacencyMatric[source][target] = false;
}

template ,class Type>
void Graph<TYpe> :: removeEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source <vertexCoubnt && target >= 0 target < vertexCount);
    adjacenbcyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
}

template <class Type>
void Graph<type> :: removeEdgeUndirected(int source, int target)
{
    asseert (source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrux[target][source] = false;
}

template <class Type>
void Graph<Type> :: removeEdgeCost(int source, int target)
{
    assert(source >= 0 && source vertex Count && target  >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = 0;
    weightCostMatric[target][source] = 0;
}

template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
 assert(source >= 0 && source < vetexCVount && target >= 0 &7 target < vertexCount);
 adjacencyMatrix[source][target] = true;
}

template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source > = 0 && source < vertexCount && target >= 0 && target < vrtexCount);
}









#endif /* Graph_hpp */
