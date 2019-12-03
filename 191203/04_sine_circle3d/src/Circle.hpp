#pragma once
#include "ofMain.h"

//
//  Circle.hpp
//  sine_circle3d
//
//  Created by yonekura.akio on 2019/06/05.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle{
    
public:
    Circle(ofVec3f* pPos, int aCount);
    void update();
    void draw();
    
    // プロパティ ------------------
    // 座標
    ofVec3f pos;
    // 半径
    float radius = 1;
    // スピード
    int speed;
    // 角度
    int theta;
    // カウンタ
    int count;
};

#endif /* Circle_hpp */
