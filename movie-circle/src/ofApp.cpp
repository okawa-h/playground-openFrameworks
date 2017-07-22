#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(60);
	ofSetBackgroundColor(0);

	_position = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
	_velocity = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));

}

//--------------------------------------------------------------
void ofApp::update(){

    _position += _velocity;

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(31,12,255);
	ofDrawCircle(_position,40);

	if (_position.x < 0 || _position.x > ofGetWidth()) {
		_velocity.x *= -1;
	}

	if (_position.y < 0 || _position.y > ofGetHeight()) {
		_velocity.y *= -1;
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
