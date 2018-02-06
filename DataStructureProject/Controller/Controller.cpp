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
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
}
{
    cout << "testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    
    vector<CrimeData> myData = FileContoller ::
    readCrimeDataToVector("sdin0932/)
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
  }
  
void Controller :: findMaxAndMin()
    {
        vector<CrimeData> myData = FileController ::: readCVSCrimeDataToVector(");
       
             int minIndex = 0;
             int maxIndex = 0;
                                                                             
             for (int index = 1; inde < myData.size(); index++)
         {
             if(myData [minIndex] < myData.size(); index++)
             {
                 minIndex = index;
             }
    if (myData [maxIndex] > myData[index])
    {
        maxIndex = index;
    }
        }
            searchTimer.stopTimer();
         cout << " The smalles crismestat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
         cout << "The largest Crime stat is at " << maxIndex << "and it is: " << myData[maxIndex] << endl;
                                                                      
                                                                      
          };
