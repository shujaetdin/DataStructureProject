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

#endif /* Stack_hpp */


// structure methods
virtual void add(Type item);
virtual void addAtIndex(int index, Type item);
virtual Type getFromIndex(int index);
virtual Type remove(int index);
