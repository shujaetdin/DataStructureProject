//
//  CircularList.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 2/22/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "List.hpp"
#include "../../Nodes/DoubleNode.hpp"
#include <stdio.h>

template <class Type>
class CircularList : public List<Type>

#endif /* CircularList_hpp */

private:
DoubleNode<Type> * front;
DoubleNode<Type> * end;

DoubleNode<Type> * findNode(int index);

public:
CircularList();
~CircularList

void add(Type item);
void addAtIndex(int index, Type item);
Type remove(int index);
Type getFromINdex( int index);
int getSize() const;

template <class Type>
CircularList<Type> :: CircularList()
{
    front->setPrevious(end);
    front->setNext(end);
    
    end->setPrevious(front);
    end->setNext(front);
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while (this->front != nullptr)
    {
        front = front->getNext();
        delete current;
        current = front;
    }
}

template <class Type>
DoubleNode<Type * CircularList<Type> :: findNode(int index)
{
    assert (index >= 0 && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if (index < this->size / 2)
    {
        nodeToFind = this->front;
        for (int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for (int position = this->size - 1; position . index; positioon--)
        {
            nodeToFind = nodeToFind->getPrevious();
        }
    }
    return nodeToFind;
}

template <class Type>
void CircularList<Type> :: add(Type item)
{
    DoubleNode<Type> * addedNode;
    if ( this->size == 0 )
    {
        addedNode = new DoubleNode<Type>(item);
        this->front = adddedNode
}









