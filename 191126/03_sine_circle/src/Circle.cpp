//
//  Circle.cpp
//  sine_circle
//
//  Created by yonekura.akio on 2019/06/05.
//

#include "Circle.hpp"


Circle::Circle(ofVec2f* pPos){
    ofSetCircleResolution(64);
    //座標　半径　スピードの初期化
    pos.set(pPos->x, pPos->y);
    radius = 0;
    theta = (int) ofRandom(0,360);
//    speed = (int) ofRandom(4);
    speed = 2;
}



//--------------------------------------------------------------
void Circle::setup(){
    
}

//--------------------------------------------------------------
void Circle::update(){
    theta += speed;
    if(theta > 360){
        theta = 0;
    }
    
    radius = (sin(ofDegToRad(theta)) + 1)/2 ;
//    cout << radius << endl;
}

//--------------------------------------------------------------
void Circle::draw(){
    ofSetColor(255);
    
    ofDrawCircle(pos.x, pos.y, radius*8);
}
