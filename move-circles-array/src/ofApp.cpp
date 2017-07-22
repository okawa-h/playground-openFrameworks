#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(60);
	ofSetBackgroundColor(0);

	for (int i = 0; i < NUM; i++) {
		_position[i] = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
		_velocity[i] = ofVec2f(ofRandom(-20,20), ofRandom(-20,20));
	}

}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i = 0; i < NUM; i++) {
		_position[i] += _velocity[i];
	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i = 0; i < NUM; i++) {

		ofSetColor(255, 255, 255);
		ofDrawCircle(_position[i],2);

		if (_position[i].x < 0 || _position[i].x > ofGetWidth()) _velocity[i].x *= -1;
		if (_position[i].y < 0 || _position[i].y > ofGetHeight()) _velocity[i].y *= -1;

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
