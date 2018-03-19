//
//  SortingTester.cpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 3/15/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#include "SortingTester.hpp"

void SortingTester :: quickSort(std::vector<CrimeData> data, int low, int high)
{
    if (low < high)
    {
        int partitioPoint = partition(data, low, high);
        
        quickSort(data, low, partitioPoint -1);
        quickSort(data, partitioPoint + 1, high);
    }
}

int SortingTester :: partition(std::vector<CrimeData> info, int low, int high)
{
    CrimeData pivotValue = info [high];
    int smallest = low - 1;
    
    for (int index = low; index < high - 1; index++)
    {
        if (info[index] < pivotValue)
        {
            smallest++;
            swap(info, smallest, index);
        }
    }
    swap(info, smallest,high);
    return smallest = 1;
}

void SortingTester :: swap(std::vector<CrimeData> info, int small, int large)
{
    CrimeData temp = info[small];
    info[small] = info[large];
    info[large] = temp;
    swapCount++;
}

void SortingTester :: testSorts()
{
    Timer sortTimer;
    swapCount = 0;
    std::vector<CrimeData> data = FileController::readCrimeDataToVector("/Users/shujaet.din/Documents/Spring 2018 2420/DataStructures/Data/crime.csv");
    sortTimer.startTimer();
    quickSort(data, 0, data.size());
    sortTimer.stopTimer();
    sortTimer.displayInformation();
    cout << "The number of swaps were: " << swapCount << endl;
}




