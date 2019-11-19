#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    ofSetCircleResolution(64);
    
    // 円の半径
    diameter = 20;

    // 座標の初期値
    posX = (int) ofGetWidth()/2;
    posY = (int) ofGetHeight()/2;
    
    // スピードの初期値
    speedX = (int) ofRandom(-8, 8);
    speedY = (int) ofRandom(-8, 8);
}

//--------------------------------------------------------------
void ofApp::update(){

    // 現在地にスピードを足す　アニメーション
    posX = posX + speedX;
    posY = posY + speedY;
    
    // 跳ね返り
    if(posX > ofGetWidth() - diameter/2 || posX < diameter/2){
        speedX = -1 * speedX;
    }
    if(posY > ofGetHeight() - diameter/2 || posY < diameter/2){
        speedY = -1 * speedY;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    

    // 四角形
    setHSBColor(270,100,100,100);
    ofFill();
    ofDrawCircle(posX, posY, diameter);
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
