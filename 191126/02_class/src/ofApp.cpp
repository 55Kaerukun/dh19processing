#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetFrameRate(60);
    
    
    for(int i=0; i<NUM; i++){
        //インスタンスの生成
        circle[i] = new Circle();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<NUM; i++){
        circle[i]->update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<NUM; i++){
        circle[i]->draw();
    }
}

