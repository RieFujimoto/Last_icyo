#pragma once

#include "ofMain.h"

#define NUM 10

class ofApp : public ofBaseApp{
    
public:
        ofVec2f location[NUM];
//    ofVec2f location;
        ofVec2f move[NUM];
//    ofVec2f move;
    ofVec2f mouse;
    float size;
    
    void setup();
    void update();
    void draw();
    void mousePressed(int x, int y, int button);
    void mouseMoved(int x, int y);
    //    void rotate_icho(int x, int y, int z);
    void draw_icho(int x, int y, int big);
    //    ofEasyCam cam;
};
