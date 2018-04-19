//
//  main.cpp
//  CNNTest
//
//  Created by Zhiming Jiang on 4/19/18.
//  Copyright © 2018 Zhiming Jiang. All rights reserved.
//

#include "model.hpp"
using namespace std;

int main () {
    int squareMatixSize = 3;
    double ** matrix = new double*[squareMatixSize]; // allocate array of int pointers
    for( int i = 0; i < squareMatixSize; i++)
    {
        matrix[i] = new double[squareMatixSize]; // allocate each array of ints
    }
    for (int i = 0; i<(squareMatixSize*squareMatixSize); i++)
    {
        matrix[i/squareMatixSize][i%squareMatixSize] = i; //or whatever we need to set it to
    }
    Model mat (matrix,squareMatixSize);
    for( int i = 0; i < squareMatixSize; i++)
    {
        delete[] matrix[i]; //delete each int array
    }
    delete[] matrix; //delete matrix
    mat.printFilterMatrix();
}

