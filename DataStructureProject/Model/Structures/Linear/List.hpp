//
//  List.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 2/22/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "LinearNode.hpp"
#include <assert.h>
#include <studio.h>

template <class Type>
class List{
protected:
    int size;
public:
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int item) = 0;
    virtual Type getFromIndex(int index) = 0;
    
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */
