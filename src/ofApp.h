#pragma once




#include "ofMain.h"
#include "ofxGifDecoder.h"
#include "ofxGifFile.h"
#include "ofxOpenCV.h"

class ofApp : public ofBaseApp{

	public:
    ofxGifDecoder decoder;
    ofxGifFile file;
    ofVideoPlayer myPlayer;
    ofFbo fbo1;
    ofFbo fbo2;
    ofFbo fbo3;
    ofFbo fbo4;
    ofFbo fbo5;
    ofFbo fbo6;
    ofFbo fbo7;
    ofFbo fbo8;
    ofFbo fbo9;

    
    ofMesh mesh;
    
    ofTexture texture;
    ofPixels videoInverted;
    ofVideoGrabber vidGrabber;
    unsigned char * pixels;
    int videoWidth=1280;
    int videoHeight=720;
    ofImage image;
    ofPixels fboPixels;
    ofArduino arduino;
    ofSerial serial;
    bool bSetupArduino;
    
    ofxCvBlob blob;
    
        int W = 200;
        int H = 200;
        int meshSize = 6;

    
    
    
		void setup();
		void update();
		void draw();
        void loadPlay();
        void loadMesh();
    
        void meshShit();
        void meshShitTwo();
        void meshShitThree();
        void meshShitFour();
        void meshShitFive();
        void meshShitSix();
        void meshShitSeven();
        void meshShitEight();
        void meshShitNine();

		void keyPressed(int key);
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
    
        void setupArduino();
        void updateArduino();
    
		
    
    
        float i;
    
        int randNum;
    
      
    
private:
    
   
//    int W = 200;
//    int H = 200;
//    int meshSize = 6;
    
    
};





