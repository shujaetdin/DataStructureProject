//
//  Node.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 2/27/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

#endif /* Node_hpp */

//Thgis section is available to ALL the subclasses of Node
Protected:
    Type data;

public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
    };
template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor compilation
    //Since when we create a structure it does not have an item to store yet.
}

template <class Type>
Node<Type> :: Node(Type  data)
{
    this->data = data;
}

template <class Type>
 void Node<Type> :: setData(Type data)
{
    this->data = data;
}
template <class Type>
TYpe Node<Type> :: getData()
{
    return data;
}

#endif /* Node_hpp */
