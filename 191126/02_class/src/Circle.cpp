//
//  Circle.cpp
//  02-02_class
//
//  Created by yonekuraakio on 2018/11/27.
//

#include "Circle.hpp"

// コンストラクタ　最初に呼ばれる関数
Circle::Circle(){
    //初期化
    pos.set(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
    speed.set(ofRandom(-5,5),ofRandom(-5,5));
    radius = ofRandom(4,20);
}


// メソッド
// update
void Circle::update(){
    //現在の位置にスピードを足す
    pos = pos + speed;
    //跳ね返り
    if(pos.x > ofGetWidth() || pos.x < 0){
        speed.x = -1 * speed.x;
    }
    if(pos.y > ofGetHeight() || pos.y < 0){
        speed.y = -1 * speed.y;
    }
}

void Circle::draw(){
    ofSetColor(0, 255, 0);
    ofSetCircleResolution(64);
    ofDrawCircle(pos.x, pos.y, radius);
}
