//
//  BinaryTreeTester.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 3/27/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//


#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "BinaryTreeNode.hpp"
#include <iostream>
#include "BinarySearchTree.hpp"

class BinaryTreeTester{
private:
    BinarySearchTree<int> testTree;
    BinaryTreeNode<int> testNode;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
