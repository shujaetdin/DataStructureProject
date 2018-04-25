//
//  AVLTree.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 4/17/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class type>
class AVLTree : public BinarysearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * tightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<tYpe> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<type>* parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

/*
 A negative value means the right is greater than the left.
 /*
 template <class Type>
 int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> *  node)
 {
 int balance;
 int leftHeight = this->calculateHeight(node->getLeftNode());
 int rightHeight = this->calculateheight(Node->getRightNode());
 balance = leftHeight - rightHeight;
 return balance;
 }
 
 template <class Type.
 BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
 {
 BinaryTreeNode<type> *AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
 {
 BinaryTreenode<Type> * changedNode;
 changedNode = parent->get
 
    
    
}

#endif /* AVLTree_hpp */
