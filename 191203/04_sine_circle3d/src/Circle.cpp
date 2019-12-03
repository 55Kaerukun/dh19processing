//
//  Circle.cpp
//  sine_circle3d
//
//  Created by yonekura.akio on 2019/06/05.
//

#include "Circle.hpp"

Circle::Circle(ofVec3f* pPos, int aCount){
    ofSetCircleResolution(64);
    count = aCount;

    //座標　半径　スピードの初期化
    theta = (count % 36) * 10;
//    cout << theta << endl;
    speed = 3;
//    pos.x = count * 20;
    pos.z = count * 20;
}

//--------------------------------------------------------------
void Circle::update(){
    theta += speed;
    if(theta > 360){
        theta = 0;
    }

    pos.y = sin(ofDegToRad(theta)) * 20;
    radius = ((sin(ofDegToRad(theta)) + 2) - 1) /2;
}

//--------------------------------------------------------------
void Circle::draw(){
    ofSetColor(127);
//    ofDrawCircle(pos.x, pos.y, pos.z, radius);
    ofDrawSphere(pos.x, pos.y, pos.z, radius);
}
