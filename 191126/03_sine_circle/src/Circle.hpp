#pragma once
#include "ofMain.h"

//
//  Circle.hpp
//  sine_circle
//
//  Created by yonekura.akio on 2019/06/05.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include <stdlib.h>

class Circle{
    
public:
    Circle(ofVec2f* pPos);
    void setup();
    void update();
    void draw();
    
    // プロパティ ------------------
    // 座標
    ofVec2f pos;
    
    // 半径
    float radius;
    
    // スピード
    int speed;
    
    int theta;
    
};

#endif /* Circle_hpp */
