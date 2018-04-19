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


Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}


int Rectangle::area (){
    return (width*height);
    
}
