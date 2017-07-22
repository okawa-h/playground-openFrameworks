#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(60);
	ofSetBackgroundColor(0);

	_position1 = _position2 = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
	_velocity1 = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));
	_velocity2 = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));

}

//--------------------------------------------------------------
void ofApp::update(){

	_position1 += _velocity1;
	_position2 += _velocity2;

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(31, 12, 255);
	ofDrawCircle(_position1,40);

	ofSetColor(230, 12, 255);
	ofDrawCircle(_position2,40);

	if (_position1.x < 0 || _position1.x > ofGetWidth()) _velocity1.x *= -1;
	if (_position1.y < 0 || _position1.y > ofGetHeight()) _velocity1.y *= -1;

	if (_position2.x < 0 || _position2.x > ofGetWidth()) _velocity2.x *= -1;
	if (_position2.y < 0 || _position2.y > ofGetHeight()) _velocity2.y *= -1;

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
