#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    //円の角の数
    ofSetCircleResolution(64);
}

//--------------------------------------------------------------
void ofApp::update(){
    //アニメーションの更新
    for (int i=0; i<position.size(); i++) {
        position[i].x = position[i].x + speed[i].x;
        position[i].y = position[i].y + speed[i].y;
        position[i].z = position[i].z + speed[i].z;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    //円の描画
    for (int i=0; i<position.size(); i++) {
        ofSetColor(255, 255, 255);
        ofDrawCircle(position[i].x, position[i].y, 2);
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
    // クリックしたら
    ofVec2f clickPos;
    // クリックした座標を保存
    clickPos.x = x;
    clickPos.y = y;
    // 動的配列の末尾にクリック座標を保存
    position.push_back(clickPos);
    
    // クリックごとに方向スピードをランダムに生成
    ofVec3f clickSpeed;
    clickSpeed.x = ofRandom(-5,5);
    clickSpeed.y = ofRandom(-5,5);
    clickSpeed.z = ofRandom(-5,5);
    speed.push_back(clickSpeed);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    // クリックしたら
//    ofVec2f clickPos;
//    // クリックした座標を保存
//    clickPos.x = x;
//    clickPos.y = y;
//    // 動的配列の末尾にクリック座標を保存
//    position.push_back(clickPos);
//
//    // クリックごとに方向スピードをランダムに生成
//    ofVec2f clickSpeed;
//    clickSpeed.x = ofRandom(-5,5);
//    clickSpeed.y = ofRandom(-5,5);
//    speed.push_back(clickSpeed);
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
