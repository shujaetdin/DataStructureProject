//
//  BinaryTreeNode.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 5/18/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <stdio.h>
#include "Node.hpp"

template<class Type>
class BinaryTreeNode : public Node<Type>{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setRightNode(BinaryTreeNode<Type> * right);
    void setLeftNode(BinaryTreeNode<Type> * left);
    
    BinaryTreeNode<Type> * getRightNode();
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftNode();
};
template<class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>(){
    root = nullptr;
    right = nullptr;
    left = nullptr;
}
template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode(){
    return this->root;
}
template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode(){
    return this->right;
}
template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode(){
    return this->left;
}
template<class Type>
void BinaryTreeNode<Type>::setRootNode(BinaryTreeNode<Type> * newRoot){
    root = newRoot;
}
template <class Type>
void BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * right){
    this->right = right;
}
template <class Type>
void BinaryTreeNode<Type> :: setLeftNode(BinaryTreeNode<Type> * left){
    this->left = left;
}
#endif /* BinaryTreeNode_hpp */
