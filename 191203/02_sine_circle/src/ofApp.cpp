#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
   
    pArr = my_arr;
//    cout << *(pArr+1) << endl;
    pArr2 = *my_arr2;
    
    cout << *my_arr2 << endl;
    
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    for (int y=0; y<ROW_NUM; y++) {
        for (int x=0; x<COL_NUM; x++) {
            
            
            circlePos[x][y].set((ofGetWidth()/2*-1)+(x*50), (ofGetHeight()/2*-1)+(y*50));
            // インスタンスの生成
            circle[x][y] = new Circle(&circlePos[x][y]);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int y=0; y<ROW_NUM; y++) {
        for (int x=0; x<COL_NUM; x++) {
            circle[x][y]->update();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int y=0; y<ROW_NUM; y++) {
        for (int x=0; x<COL_NUM; x++) {
            ofPushMatrix();
            ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
            circle[x][y]->draw();
            ofPopMatrix();
        }
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
