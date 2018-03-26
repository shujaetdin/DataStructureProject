//
//  GraphTester.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 3/23/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include"/Users/sdin0932/Documents/Data Structure/DataStructure/Model/Structures/NonLinear/Graph.hpp"


class GraphTester{
    
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};
#endif /* GraphTester_hpp *




