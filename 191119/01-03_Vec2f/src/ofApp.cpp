#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    ofSetCircleResolution(64);

    // 座標の初期値
    for (int i=0; i<NUM; i++) {
        pos[i].x = ofGetWidth()/2;
        pos[i].y = ofGetHeight()/2;
        // スピードの初期値
        speed[i].x = ofRandom(-8, 8);
        speed[i].y = ofRandom(-8, 8);
        
        // 円の直径
        diameter[i] = (int) ofRandom(10,40);
        // 色相
        hue[i] = (int) ofRandom(200,300);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i=0; i<NUM; i++) {
        // 現在地にスピードを足す　アニメーション
        pos[i] += speed[i];
        // 跳ね返り
        if(pos[i].x > ofGetWidth() - diameter[i]/2 || pos[i].x < diameter[i]/2){
            speed[i].x = -1 * speed[i].x;
        }
        if(pos[i].y > ofGetHeight() - diameter[i]/2 || pos[i].y < diameter[i]/2){
            speed[i].y = -1 * speed[i].y;
        }

    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i=0; i<NUM; i++) {
        // 円
        setHSBColor(hue[i],100,100,80);
        ofFill();
        ofDrawCircle(pos[i].x, pos[i].y, diameter[i]);
    }
    
    
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
