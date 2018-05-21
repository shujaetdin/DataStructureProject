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
#include "HashNode.hpp"
#include <cmath>
#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

template <class Type>
class Hashtable{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrimeNumber();
    bool isPrime(long current);
    
    int candidateNumber;
    void resize();
    long findPosition(HashNode<Type> * insertedNode);
    long handleCollision(long index);
public:
    Hashtable();
    ~Hashtable();
    void insert(Type data);
    long getSize();
    HashNode<Type> * get(long index);
    bool contains(HashNode<Type> * value);
};
template <class Type>
Hashtable<Type> :: Hashtable(){
    internalStorage = new HashNode<Type>[capacity];
    capacity = 101;
    size = 0;
    loadFactor = .8;
}
template<class Type>
Hashtable<Type> :: ~Hashtable(){
    delete [] internalStorage;
}
template <class Type>
long Hashtable<Type> :: getNextPrimeNumber(){
    long nextPrime = (this ->capacity * 2) +1;
    while(!isPrime(nextPrime)){
        nextPrime+=2;
    }
    return nextPrime;
}
template <class Type>
void Hashtable<Type> :: resize(){
    long updatedCapacity = getNextPrimeNumber();
    HashNode<Type> ** tempStorage = new Hashtable<Type> * [updatedCapacity];
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    long oldCapacity = this->capacity;
    this->capacity = updatedCapacity;
    
    for(long index = 0; index < oldCapacity; index++){
        if(internalStorage[index] != nullptr){
            HashNode<Type> * temp = internalStorage[index];
            long position = findPosition(temp);
            if(tempStorage[position] == nullptr){
                tempStorage[position] = temp;
            }
            else{
                long updatedPosition = handleCollision(temp, position);
                if(updatedPosition != -1){
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
    }
    internalStorage = tempStorage;
}
template <class Type>
void Hashtable<Type> :: insert(Type value){
    this-size++;
    if(((this->size * 1.000)/this->capacity) > this->loadFactor){
        resize();
    }
    HashNode<Type> * temp = new Hashtable<Type>(value);
    long index = findPosition(temp);
    if(internalStorage[index] == nullptr){
        internalStorage[index] = temp;
    }
    else{
        long updatedPosition = handleCollision(temp, index);
        if(updatedPosition != -1){
            internalStorage[updatedPosition] = temp;
        }
    }
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert){
    long insertPosition = insert ->getKey()%this->capacity;
    return insertPosition;
}
template <class Type>
long Hashtable<Type> :: handleCollision(long currentPosition){
    long shift = 17;
    for (long position = currentPosition+shift;position != currentPosition; position++){
        position += shift;
        if(position>=capacity){
            position = position%capacity;
        }
        if(internalStorage[position] == nullptr){
            return position;
        }
    }
    return -1;
}
template <class Type>
long Hashtable<Type>::getSize(){
    return -1;
}
template <class Type>
bool Hashtable<Type> :: isPrime(long current){
    if(candidateNumber <= 1){
        return false;
    }
    else if(current == 2 || current == 3){
        return true;
    }
    else if (current % 2 == 0){
        return false;
    }
    else{
        for (int next = 3; next <= sqrt(current)+1; next+=2){
            if(current % next == 0){
                return false;
            }
            return true;
        }
    }
}
template <class Type>
HashNode<Type> * Hashtable<Type> :: get(long index){
    assert(index < capacity);
    return internalStorage[index];
}
template <class Type>
bool Hashtable<Type>:: contains(HashNode<Type> * value){
    if (internalStorage[findPosition(value)]->getData() == value->getData()){
        return true;
    }
    long other = handleCollision(findPosition(value));
    if (internalStorage[other]->getData() == value->getData()){
        return true;
    }
    return false;
}
#endif /* Hashtable_hpp */




























