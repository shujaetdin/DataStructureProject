//
//  ArrayTester.cpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 2/6/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#include "ArrayTester.hpp"

void ArrayTester :: testArrayUse()
{
    Arrray<int> firstArray(10);
    
    for ( int index = 0; index < 10; index++)
    {
        fisrtArray.setAtdex(index, index);
    }
    
    for (int index = 0; index < firstArray.getSize(); index++)
    {
        cout << firstArray[index] << endl;
    }
    Array<int> secondArray (400);
    
    cout << secndArray.getSize() << endl;
    cout << firstArray.getSize << endl;
    
    Array<int> thirdArray(secondArray);
    
    cout << thirdArray.getSize) << endl;
    fisrtArray = thirdArray;
    cout<< fisrtArray[4] << endl;
    
    thirdArray[5] = 123;
    cout << firstArray[5]<, endl;
}

void ArrayTester :: testAdvancedArray()
{
    
}
