#pragma once

#include "ofMain.h"
#include "Circle.hpp"

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
    
    void gridHelper(int size, int step);
    
    ofEasyCam cam;
    
    static const int COL_NUM = 60;
    static const int ROW_NUM = 60;
    
//    Circle* circle[COL_NUM];
    Circle* circle[COL_NUM][ROW_NUM];
    ofVec3f circlePos[COL_NUM][ROW_NUM];
    
    int theta = 0;
    float radius = 0.0;
};
