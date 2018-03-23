//
//  Controller.cpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 1/31/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include "CrimeData.hpp"
#include "Tools/Timer.hpp"
#inlclude "FileController.hpp"
#include "Array.hpp"
#include "ArrayTester.hpp"
using namespace std;

void Controller :: start()
{
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
    findMaxMin();
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/sdin0932/Downloads/crime.csv");
    for (int loop = 200; loop < 210 ; loop ++)
    {
        cout << "Spot # " << loop <<";" << myData[loop] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    RecursionTester test;
    test.testRecursionNumbers();
}

void controller :: findMaxMin()
{
    Timer searchTimer.startTimer();
    int maxIndex = 0;
    int minIndex = 0;
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/sdin0932/Downloads/crime.csv")
    for (int index = 1; index < myData.size(); index++){
        if (myData[minIndex] < myData[index]){
            minIndex = index;
        }
        else if (myData[maxIndex] > myData[index]){
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest crime stat is at "<< maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}

