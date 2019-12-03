#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetFrameRate(60);
    
    
    // カメラ設定
    cam.setFov(80.0f);
    cam.setPosition(0,20,100);
    
    for (int x=0; x<ROW_NUM; x++) {
        for (int z=0; z<COL_NUM; z++) {
            
            circlePos[z][x].set(0, 0, z*50);
            // インスタンスの生成
//            circle[x] = new Circle(&x);
            circle[z][x] = new Circle(&circlePos[z][x], z);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int x=0; x<ROW_NUM; x++) {
        for (int z=0; z<COL_NUM; z++) {
            circle[z][x]->update();
//            circle[x]->update();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    gridHelper(1000, 10);
    ofDrawAxis(1000);
    ofTranslate(ofGetWidth()/2 * -1, 0, ofGetHeight()/2 * -1);
    
    for (int x=0; x<ROW_NUM; x++) {
        ofPushMatrix();
        ofTranslate(x*20, 0);
        for (int z=0; z<COL_NUM; z++) {


//            ofPushMatrix();
//            ofTranslate(ofGetWidth()/2, 0, ofGetHeight()/2);
            circle[z][x]->draw();
//            circle[x]->draw();
//            ofPopMatrix();

        }
        ofPopMatrix();
    }
    
    
    
    cam.end();
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


//ofApp.cpp
void ofApp::gridHelper(int size, int step){
    ofSetColor(0,10);
    for (int i=0; i<size; i+=step) {
        ofDrawLine(i-size/2, 0, size/2, i-size/2, 0, -size/2);
        ofDrawLine(-size/2, 0, i-size/2, size/2, 0, i-size/2);
    }
}
