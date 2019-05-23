#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
//        for(int i = 0; i < NUM; i++){
//            move[i].x = 0;
//            move[i].y = 0;
//        }
        for(int i = 0; i < NUM; i++){
            //        move[i] = ofVec2f(i, i);
            move[i] = ofVec2f(ofRandom(1000), ofRandom(800));
        }
    //    cout << move[0] << endl;
    //    for(int i = 0; i < 10; i++){
    //    move.x = ofRandom(ofGetWidth());
    //    move.y = ofRandom(ofGetHeight());
    //    move.x = 100;
    //    move.y = 100;
    //    }
    move = ofVec2f(0, 0);
    
}
//--------------------------------------------------------------
void ofApp::update(){
    
    //    for(int i = 0; i < NUM; i++){
    //        move[i].x += 0.1;
    //        move[i].y += 0.1;
    //    }
    //
    //    for(int i = 0; i < NUM; i++){
    //        move[i].x += 0.01;
    //        move[i].y += 0.01;
    //    }
    //
    move.x += 0.1;
    move.y += 0.1;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 220, 70, 200);
    for(int i; i <  NUM; i++){
        draw_icho[i](0, 0, 100);
    }
    draw_icho(0, 0, 100);
}

//--------------------------------------------------------------
void ofApp::draw_icho(int x, int y, int big){
    location = ofVec2f(x + move.x, y + move.y);
    
    //    location = ofVec2f(move.x, move.y);
    
    //    for(int i = 0; i < NUM; i++){
    //        location[i] = move[i].x;
    //        location[i] = move[i].y;
    //    }
    
    //    cout << location.x << ", " << location.y << endl;
    //    location = ofVec2f(mouseX + move.x, mouseY + move.y);
    //    location = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    //    if(location.x > ofGetWidth() || location.y > ofGetHeight()){
    //        location = ofVec2f(move.x, move.y);
    //    }
    size = ofRandom(0) + big;
    
    ofPushMatrix();
    
    ofTranslate(location);
    
    //    ofRotateDeg(ofGetFrameNum()*0.1, ofGetFrameNum()*0.1, ofGetFrameNum()*0.1, ofGetFrameNum()*0.1);
    float time = ofGetElapsedTimef()*30;
    ofRotateDeg(time, time, time, time);
    
    ofPushMatrix();
    
    ofBeginShape();
    ofVertex(0, size*0.2);
    ofVertex(-size*0.05, size*0.45);
    ofVertex(-size*0.3, size*0.35);
    ofVertex(-size*0.45, size*0.25);
    ofVertex(-size*0.3, size*0.15);
    ofVertex(-size*0.17, 0);
    ofVertex(-size*0.05, -size*0.15);
    ofVertex(0, -size*0.3);
    ofVertex(size*0.05, -size*0.15);
    ofVertex(size*0.17, 0);
    ofVertex(size*0.3, size*0.15);
    ofVertex(size*0.45, size*0.25);
    ofVertex(size*0.3, size*0.35);
    ofVertex(size*0.05, size*0.45);
    ofEndShape();
    
    ofSetLineWidth(2);
    ofDrawLine(0, -size*0.2, 0, -size*0.5);
    
    ofPopMatrix();
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    mouseX = x;
    mouseY = y;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    //    move.x = x;
    //    move.y = y;
}
