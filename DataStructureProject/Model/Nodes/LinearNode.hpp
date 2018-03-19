//
//  LinearNode.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 3/19/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <stdio.h>
#include "node.hpp"
tenplate<class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> 8 next;
public: LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

template <class Type>
LinearNode<Type> :: LineraNode() : Node<Type> ()
{
    this-> next = nullptr;
    return next;
}

//void LinkedList<type> :: addAtIndex(int index, Type item){
//    assert(index >= 0 && index <= size);
//    if (inde == size){
//        add(item);
//    }
//    else{
//        LinearNode<Type> * toBeAddes = new LinearNode<Type>(item);
//        if (index == 0){
//            toBeAdded -> setNextNode(front);
//            front = toBeAdded;
//        }
//        else{
//            LinearNode<Type> * previous = nullptr;
//            LinearNode<Type> * current = front;
//
//
//
//
//        }
//    }
//}

#endif /* LinearNode_hpp */
