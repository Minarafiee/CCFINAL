#pragma once

#include "ofMain.h"
#include "particle.h"

#include "ofxOpenCv.h"

#define _USE_LIVE_VIDEO

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void resetParticles();
    void rotate();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void rotate(float);
    
    
    bool                    bLearnBackground;
    
#ifdef _USE_LIVE_VIDEO
    ofVideoGrabber      vidGrabber;
    
    particleMode currentMode;
    string currentModeStr;
    
    vector <demoParticle> p;
    vector <ofPoint> attractPoints;
    vector <ofPoint> attractPointsWithMovement;
    
};
