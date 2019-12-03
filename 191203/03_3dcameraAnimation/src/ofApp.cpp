#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    ofBackground(255);
    ofEnableSmoothing();
    
//    ofEnableDepthTest();
    
    // camera settings ---------------------------------
    cam.setFov(80.0f);
//    cam.setDistance(100);
    cameraPos.set(0,0,0);
    // light
    
    light.setSpotlight();
    light.setPosition(0, 0, 500);
    
    

    // box
    boxPos.set(0,0,0);
    
    //boxes
    for (int i=0; i<NUM; i++) {
        boxesPos[i].x= ofRandom(-500,500);
        boxesPos[i].y= ofRandom(-500,500);
        boxesPos[i].z= ofRandom(-500,500);
        boxes[i].set(ofRandom(10,50));
        boxesHue[i] = ofRandom(360);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
//    cameraTheta += 0.2;
//    if(cameraTheta > 360){
//        cameraTheta = 0;
//    }
    float distanceTheta = targetCameraTheta - cameraTheta;
    
    cameraTheta += distanceTheta * cameraEasing;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    
    cameraPos.x = cameraRadius * cos(ofDegToRad(cameraTheta));
    cameraPos.y = 100;
    cameraPos.z = cameraRadius * sin(ofDegToRad(cameraTheta));
    
    cam.setPosition(cameraPos);
    
    cam.begin();
    light.enable();
    
    ofSetColor(255, 0, 0); //カラー
    box.set(15);
    box.setPosition(0, 0, 0);
    box.draw();
    
    
    //boxes
    for (int i=0; i<NUM; i++) {
        
        setHSBColor(boxesHue[i],100,100,100);
        boxes[i].setPosition(boxesPos[i]);
        boxes[i].draw();
    }

    
    
    
    ofDrawRotationAxes(200,1,60);
    ofDrawAxis(1000);
    gridHelper(1000,20);
    
    
    cam.setTarget(boxPos);
    light.disable();
    cam.end();
    
    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
   
    
    
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


void ofApp::axixHelper(){
    // Circle
    int r = 100;
    ofSetColor(0,20);
    for(int i=0; i<360; i++){
        float x = r * cos(ofDegToRad(i));
        float y = r * sin(ofDegToRad(i));
        ofDrawCircle(x, y, 0, 1);
    }
    for(int i=0; i<360; i++){
        float x = r * cos(ofDegToRad(i));
        float z = r * sin(ofDegToRad(i));
        ofDrawCircle(x, 0, z, 1);
    }
    for(int i=0; i<360; i++){
        float y = r * cos(ofDegToRad(i));
        float z = r * sin(ofDegToRad(i));
        ofDrawCircle(0, y, z, 1);
    }
    
    // Axis
    int size = 2000;
    // xAxis
    ofSetColor(255,0,0);
    ofDrawLine(-size, 0, 0, size, 0, 0);
    // yAxis
    ofSetColor(0,255,0);
    ofDrawLine(0,-size, 0, 0, size, 0);
    // zAxis
    ofSetColor(0,0,255);
    ofDrawLine(0,0,-size, 0, 0, size);
}


void ofApp::gridHelper(int size, int step){
    // Circle
    ofSetColor(0,20);
    for (int i=0; i<size; i+=step) {
        ofDrawLine(i-size/2, 0, size/2, i-size/2, 0, -size/2);
        ofDrawLine(-size/2, 0, i-size/2, size/2, 0, i-size/2);
    }
}


