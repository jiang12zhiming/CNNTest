//
//  model.hpp
//  CNNTest
//
//  Created by Zhiming Jiang on 4/19/18.
//  Copyright © 2018 Zhiming Jiang. All rights reserved.
//

#ifndef model_hpp
#define model_hpp
#include<iostream>
#include<fstream>
#include <stdio.h>

class Model {
private:
    double **array;
    int weightFilterSize;
//    double  weightFilter;
//    int weightFilterSize;
public:
    Model(int);
    Model (double**, int);
    void printFilterMatrix ();
};
#endif /* model_hpp */
