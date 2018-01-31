//
//  FileContoller.hpp
//  DataStructureProject
//
//  Created by Din, Shujaet on 1/31/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#ifndef FileContoller_hpp
#define FileContoller_hpp

#include <stdio.h>
#include"../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

public:
static vector<CrimeData readCrimeDataToVector(string filename);



#endif /* FileContoller_hpp */
