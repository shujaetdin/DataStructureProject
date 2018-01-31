//
//  Timer.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 1/31/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
    clock_t executionTime;
public:
Timer();
void startTimer();
void stopTimer();
void resetTimer();
void displayInformation();
void getTimeInMicroseconds();
};



#endif /* Timer_hpp */
