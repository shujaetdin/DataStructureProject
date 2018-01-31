//
//  Controller.cpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 1/31/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#include "Controller.hpp"
using namespace std;

void Controller :: start()
{
    cout << "testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
    codeTimer.stratTimer();
    for (int indx = 0; index < 100; index++)
    {
        cout << "The index is " << index << "\t";
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation()
