#pragma once

#include "ofxTeensyOcto.h"

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofxTeensyOcto teensy;
    
    // draw functions
    //-----------------------------
    void drawWaves();
    
    // counters
    //-----------------------------
    void updateScroller();
    float counterShape;
    int hue;
    
    // variables misc
    //-----------------------------
    int ledWidth;
    int ledHeight;
    int brightness;
    float waveSpeed;
		
};
