#pragma once

#include "ofMain.h"
#include "Circle.hpp" //クラスのヘッダファイルを読み込む

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    //ポインタ変数　クラスのインスタンス
//    Circle* circle;
    
    static const int NUM = 1000;
    Circle* circle[NUM];
};
