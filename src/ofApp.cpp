#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofBackgroundHex(0xfdefc2);
    ofSetLogLevel(OF_LOG_NOTICE);
    
    boundaries.panelLeft.panelSize      = ofRectangle( 100, ofGetWindowHeight()/2, 50,200 );
    boundaries.panelRight.panelSize     = ofRectangle( ofGetWindowWidth()-100, ofGetWindowHeight()/2, 50,200 );
    
    superPong.init();
}

//--------------------------------------------------------------
void ofApp::update(){
    superPong.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    superPong.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'f')
    {
        ofToggleFullscreen();
        superPong.rescaleBounds();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    superPong.paddleLeft_->setPosition(100, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    superPong.paddleRight_->setPosition(ofGetWindowWidth()-100, y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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