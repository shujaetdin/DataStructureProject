//
//  Hashtable.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 5/1/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include <stdio.h>

#endif /* Hashtable_hpp */





































template <class Type>
long Hashtable; <Type> :: getNextPrime()
{
    long nextPrime = (this->capacity * 2) +1;
    
    while(!isPrime(nextPrime))
    {
        nextprime
    }
}



template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    if(candidmateNumber <= 1)
    {
        return false;
    }
    else if(current == 2 || current == 3)
    {
        return true;
    }
    else if(current % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 2; next <= sqrt(current) +1; next += 2)
        {
            if(current % next == 0)
            {
                return false
            }
        }
        return true;
    }
    
}

template <class Type>
long Hashtable<Table> :: findPosition(HashNode<Type> * insert)
{
    long insertPosition = insert->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
long Hashtable<Table> :: handleCollision(HashNode<Type> * current, long index)
{
return
    




























