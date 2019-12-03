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
    void axixHelper();
    void gridHelper(int size, int step);
    
    ofEasyCam cam;
    
    ofLight light;
    
    ofBoxPrimitive box;
    ofVec3f boxPos;
    
    static const int NUM = 100;
    ofBoxPrimitive boxes[NUM];
    ofVec3f boxesPos[NUM];
    int boxesHue[NUM];
    
    int cameraRadius = 300;
    float cameraTheta = 0.0;
    float targetCameraTheta = 180.0;
    ofVec3f cameraPos;
    float cameraEasing = 0.05;
    
};
