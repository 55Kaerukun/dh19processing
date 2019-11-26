#pragma once

#include "ofMain.h"

#include "Circle.hpp"
#include <stdlib.h>

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    static const int COL_NUM = 20;
    static const int ROW_NUM = 20;
    
    Circle* circle[COL_NUM][ROW_NUM];
    ofVec2f circlePos[COL_NUM][ROW_NUM];
    
    //テスト配列
    int my_arr[5] = {10,20,30,40,50};
    int* pArr;
    
    int my_arr2[3][2] = {{100, 200}, {300, 400}, {500, 600}};
    
    int* pArr2;
		
};
