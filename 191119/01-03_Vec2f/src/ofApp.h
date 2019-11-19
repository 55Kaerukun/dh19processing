#pragma once

#include "ofMain.h"

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

    void triangle(float x, float y, float width, float height);
    void rectangle(float x, float y, float width, float height);
    void pentagon(float x, float y, float width, float height);
    void hexagon(float x, float y, float width, float height);
    void heptagon(float x, float y, float width, float height);
    void octagon(float x, float y, float width, float height);
    void setHSBColor(int hue, int saturation, int brightness, int alpha);


    // 静的配列

    // 一つのクラスに対して1つだけ存在し、しかも書き換えができない変数
    static const int NUM = 500;

    // 円の半径
//    int diameter;

    // 円の座標
    ofVec2f pos[NUM];
    // 円のスピード
    ofVec2f speed[NUM];

    //　色相用
    int hue[NUM];

    // 円の直径
    int diameter[NUM];

};
