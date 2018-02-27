//
//  Stack.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 2/22/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
    //Stack specific methods
    void push(Type data);
    Type pop();
    Type peek();
    
    //Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromiIndex(int index);
    Type remove(int index);
    
    template <class> type>
    Stack<Type> :: Stack() : LinkedList<type>()
    {
        //Empty
    }
    
    template <class Type>
    Stack<Type> :: ~Stack()
    {
        while(this->size > 0)
        {
            pop();
        }
    }

template <class Type>
    void Stack<Type> :: push(Type data)
    {
        LinearNode<Type> * add = new LinearNode
    }



// structure methods
virtual void add(Type item);
virtual void addAtIndex(int index, Type item);
virtual Type getFromIndex(int index);
virtual Type remove(int index);
