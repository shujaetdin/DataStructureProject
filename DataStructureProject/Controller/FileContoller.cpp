//
//  FileContoller.cpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 1/31/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#include "FileContoller.hpp"

vector<CrimeData> FileContoller :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while( !dataFile.eof())
        {
           //GHrab each line from the CSV seperated by the carriage return charcater.
            getLine(dataFile, vurrentCSVLine, '\r');
            //Exclude hedaer row
            if (rowCount !=0)
            {
            //Create a CrimeData instance from the line.
                CrimeData row(currentCSVLine);
                crimeVector.push_back(row)
            }
            rowCount++
        }
        dataFile.close();
    }
    else
    {
        cerr << "No File" << endl;
    }

    return crimeVector;
    
        

