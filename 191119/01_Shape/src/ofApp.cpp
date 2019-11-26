#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing(); //描画をスムースに
    ofBackground(255, 255, 255);
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // 四角形
    setHSBColor(270,100,100,100);
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER); // 四角形の起点を中央に
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, 200, 200);

    // 円
    setHSBColor(0,100,100,20);
    ofNoFill();
    ofSetCircleResolution(64); //円の頂点数
    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 100);

    // 三角形
    setHSBColor(80,100,100,100);
    ofFill();
    triangle(500, 200, 100, 100);

    // 六角形
    setHSBColor(140,100,100,100);
    ofFill();
    hexagon(200, 500, 200, 200);


    // 罫線
    setHSBColor(120,100,100,100);
    ofSetLineWidth(4);
    ofDrawLine(0, 0, ofGetWidth(), ofGetHeight());
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}


//--------------------------------------------------------------
void ofApp::setHSBColor(int hue, int saturation, int brightness, int alpha){
    int setHue = (int)ofMap(hue, 0 , 360, 0, 255);
    int setSaturation = (int)ofMap(saturation, 0 , 100, 0, 255);
    int setBrightness = (int)ofMap(brightness, 0 , 100, 0, 255);
    int setAlpha = (int)ofMap(alpha, 0, 100, 0, 255);
    ofColor c;
    c.setHsb(setHue, setSaturation, setBrightness, setAlpha);
    return ofSetColor(c);
}

//--------------------------------------------------------------

void ofApp::triangle(float x, float y, float width, float height){
    ofSetCircleResolution(3);
    ofDrawEllipse(x,y,width,height);
}

//--------------------------------------------------------------
void ofApp::rectangle(float x, float y, float width, float height){
    ofSetCircleResolution(4);
    ofDrawEllipse(x,y,width,height);
}

//--------------------------------------------------------------
void ofApp::pentagon(float x, float y, float width, float height){
    ofSetCircleResolution(5);
    ofDrawEllipse(x,y,width,height);
}

//--------------------------------------------------------------
void ofApp::hexagon(float x, float y, float width, float height){
    ofSetCircleResolution(6);
    ofDrawEllipse(x,y,width,height);
}

//--------------------------------------------------------------
void ofApp::heptagon(float x, float y, float width, float height){
    ofSetCircleResolution(7);
    ofDrawEllipse(x,y,width,height);
}

//--------------------------------------------------------------
void ofApp::octagon(float x, float y, float width, float height){
    ofSetCircleResolution(8);
    ofDrawEllipse(x,y,width,height);
}
