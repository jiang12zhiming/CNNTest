//
//  model.cpp
//  CNNTest
//
//  Created by Zhiming Jiang on 4/19/18.
//  Copyright © 2018 Zhiming Jiang. All rights reserved.
//

#include "model.hpp"
#include <iostream>
using namespace std;

Model::Model (double **a,int b) {
    weightFilterSize =b;
    array=new double*[weightFilterSize];
    for(int i=0;i<b;i++)
        array[i]=new double[b];
    for(int i=0;i<b;i++)
        for(int j=0;j<b;j++)
            array[i][j]=a[i][j];
}
void Model::printFilterMatrix (){
    for(int i=0; i<weightFilterSize; i++)    //This loops on the rows.
    {
        for(int j=0; j<weightFilterSize; j++) //This loops on the columns
        {
            cout << array[i][j]  << "  ";
        }
        cout << endl;
    }
    
}
