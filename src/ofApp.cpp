#include "ofApp.h"


//--------------------------------------------------------------




void ofApp::setup(){
    
//    myPlayer.loadMovie("blue.mp4");
//    myPlayer.play();
    
    arduino.connect("/dev/cu.usbmodem1421", 9600);
    
    bSetupArduino = false;
    
        if(arduino.isArduinoReady()){
                if(bSetupArduino == false){
            
                    setupArduino();
                    bSetupArduino;
//            int reading = arduino.getAnalog(0);
                }
                    updateArduino();
    
        }
    
    
                fbo1.readToPixels(fboPixels);
                image.setFromPixels(fboPixels);
                fbo1.allocate(videoWidth, videoHeight);
   
                fbo1.begin();
                ofClear(255,255,255,0);
                fbo1.end();
    
    
                fbo2.readToPixels(fboPixels);
                image.setFromPixels(fboPixels);
                fbo2.allocate(videoWidth, videoHeight);
    
                fbo2.begin();
                ofClear(255,255,255,0);
                fbo2.end();
    
    fbo3.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
    fbo3.allocate(videoWidth, videoHeight);
    
    fbo3.begin();
    ofClear(255,255,255,0);
    fbo3.end();
    
    fbo4.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
    fbo4.allocate(videoWidth, videoHeight);
    
    fbo4.begin();
    ofClear(255,255,255,0);
    fbo4.end();
    
    fbo5.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
    fbo5.allocate(videoWidth, videoHeight);
    
    fbo5.begin();
    ofClear(255,255,255,0);
    fbo5.end();
    
    fbo6.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
    fbo6.allocate(videoWidth, videoHeight);
    
    fbo6.begin();
    ofClear(255,255,255,0);
    fbo6.end();
    
    fbo7.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
    fbo7.allocate(videoWidth, videoHeight);
    
    fbo7.begin();
    ofClear(255,255,255,0);
    fbo7.end();
    
    
    fbo8.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
    fbo8.allocate(videoWidth, videoHeight);
    
    fbo8.begin();
    ofClear(255,255,255,0);
    fbo8.end();
    
    fbo9.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
    fbo9.allocate(videoWidth, videoHeight);
    
    fbo9.begin();
    ofClear(255,255,255,0);
    fbo9.end();
    
    
    
    
    
    
    
    
    
        fbo1.begin();
        for (int y=0; y<H; y++) {
                    for (int x=0; x<W; x++) {
                            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
                            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
                            mesh.addColor(ofColor(255, 255, 255,0));
                }
        }
    
   
            for (int y=0; y<H-1; y++) {
                for (int x=0; x<W-1; x++) {
                    int i1 = x + W * y;
                    int i2 = x+1 + W * y;
                    int i3 = x + W * (y+1);
                    int i4 = x+1 + W * (y+1);
                            mesh.addTriangle( i1, i2, i3 );
                            mesh.addTriangle( i2, i4, i3 );
                }
        }
    
            fbo1.end();
    
    
            fbo2.begin();
    
    
        for (int y=0; y<H; y++) {
            for (int x=0; x<W; x++) {
                mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
                mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
                mesh.addColor(ofColor(255, 255, 255,0));
            }
    }
    
    
    for (int y=0; y<H-1; y++) {
            for (int x=0; x<W-1; x++) {
                int i1 = x + W * y;
                int i2 = x+1 + W * y;
                int i3 = x + W * (y+1);
                int i4 = x+1 + W * (y+1);
                mesh.addTriangle( i1, i2, i3 );
                mesh.addTriangle( i2, i4, i3 );
            }
        }
    
    fbo2.end();
    
    
    fbo3.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
            mesh.addColor(ofColor(255, 255, 255,0));
        }
    }
    
    
    for (int y=0; y<H-1; y++) {
        for (int x=0; x<W-1; x++) {
            int i1 = x + W * y;
            int i2 = x+1 + W * y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            mesh.addTriangle( i1, i2, i3 );
            mesh.addTriangle( i2, i4, i3 );
        }
    }
    
    fbo3.end();
    
    fbo4.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
            mesh.addColor(ofColor(255, 255, 255,0));
        }
    }
    
    
    for (int y=0; y<H-1; y++) {
        for (int x=0; x<W-1; x++) {
            int i1 = x + W * y;
            int i2 = x+1 + W * y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            mesh.addTriangle( i1, i2, i3 );
            mesh.addTriangle( i2, i4, i3 );
        }
    }
    
    fbo4.end();
    
    
    
    fbo5.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
            mesh.addColor(ofColor(255, 255, 255,0));
        }
    }
    
    
    for (int y=0; y<H-1; y++) {
        for (int x=0; x<W-1; x++) {
            int i1 = x + W * y;
            int i2 = x+1 + W * y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            mesh.addTriangle( i1, i2, i3 );
            mesh.addTriangle( i2, i4, i3 );
        }
    }
    
    fbo5.end();
    
    
    
    fbo6.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
            mesh.addColor(ofColor(255, 255, 255,0));
        }
    }
    
    
    for (int y=0; y<H-1; y++) {
        for (int x=0; x<W-1; x++) {
            int i1 = x + W * y;
            int i2 = x+1 + W * y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            mesh.addTriangle( i1, i2, i3 );
            mesh.addTriangle( i2, i4, i3 );
        }
    }
    
    fbo6.end();
    
    
    
    fbo7.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
            mesh.addColor(ofColor(255, 255, 255,0));
        }
    }
    
    
    for (int y=0; y<H-1; y++) {
        for (int x=0; x<W-1; x++) {
            int i1 = x + W * y;
            int i2 = x+1 + W * y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            mesh.addTriangle( i1, i2, i3 );
            mesh.addTriangle( i2, i4, i3 );
        }
    }
    
    fbo7.end();
    
    
    fbo8.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
            mesh.addColor(ofColor(255, 255, 255,0));
        }
    }
    
    
    for (int y=0; y<H-1; y++) {
        for (int x=0; x<W-1; x++) {
            int i1 = x + W * y;
            int i2 = x+1 + W * y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            mesh.addTriangle( i1, i2, i3 );
            mesh.addTriangle( i2, i4, i3 );
        }
    }
    
    fbo8.end();
    
    fbo9.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            mesh.addVertex(ofPoint((x - W/2) * meshSize, (y - H/2) * meshSize, 0 )); // adding texure
            mesh.addTexCoord(ofPoint(x * (videoWidth / W), y * (videoHeight / H)));
            mesh.addColor(ofColor(255, 255, 255,0));
        }
    }
    
    
    for (int y=0; y<H-1; y++) {
        for (int x=0; x<W-1; x++) {
            int i1 = x + W * y;
            int i2 = x+1 + W * y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            mesh.addTriangle( i1, i2, i3 );
            mesh.addTriangle( i2, i4, i3 );
        }
    }
    
    fbo9.end();
    
  
    
}


//
//--------------------------------------------------------------

//--------------------------------------------------------------
void ofApp::update(){
    
    myPlayer.update();
    
    
    randNum=0;
    
    switch(randNum){
            
            
        case 0:
            
            
            fbo1.begin();
            
            ofClear(255,255,255,0);
            
            fbo1.end();
            
            fbo1.begin();
            
            meshShit();
            
            fbo1.end();
            
            
           
            
            break;
            
            
        case 1:
            
            fbo2.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo2.end();
            
            fbo2.begin();
            
            meshShitTwo();
            
            fbo2.end();
            
            
            
            break;
            
        case 2:
            
            
            
            fbo3.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo3.end();
            
            fbo3.begin();
            
            meshShitTwo();
            
            fbo3.end();
            
            break;
            
        case 3:
            
            fbo4.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo4.end();
            
            fbo4.begin();
            
            meshShitTwo();
            
            fbo4.end();
            
            
            
            
            
            break;
            
        case 4:
            
            fbo5.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo5.end();
            
            fbo5.begin();
            
            meshShitTwo();
            
            fbo5.end();
            
            
            
            
            break;
            
        case 5:
            
            fbo6.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo6.end();
            
            fbo6.begin();
            
            meshShitTwo();
            
            fbo6.end();
            
            
            
            
            break;
            
        case 6:
            fbo7.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo7.end();
            
            fbo7.begin();
            
            meshShitTwo();
            
            fbo7.end();
            
            
            
            break;
        
        
        
        case 7:
            
            fbo8.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo8.end();
            
            fbo8.begin();
            
            meshShitTwo();
            
            fbo8.end();
            
            
            break;
            
        
        case 8:
            fbo9.begin();
            
            ofClear(255, 255, 255, 0);
            
            fbo9.end();
            
            fbo9.begin();
            
            meshShitTwo();
            
            fbo9.end();
            
            
           
            break;
            
        
        
            
            
    }
    
    
    
//    
//    for (int y=0; y<H; y++) {
//        for (int x=0; x<W; x++) {
//            int i = x + W * y;
//            ofPoint p = mesh.getVertex( i );
//            
//            float scaleX = videoWidth;
//            float scaleY = videoHeight;
//            
//            int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 6;
//            // int brightness = fboPixels[index] / 4;
//            
//            p.z =  ofNoise(x * 0.5, y * 0.4, ofGetElapsedTimef() * 0.5) * 100;
//            mesh.setVertex( i, p );
//            
//            mesh.setColor(i , ofColor(ofRandom(255,0), ofMap(arduino.getAnalog(0), 0, 1023, 0, 255), ofRandom(0,250),50));
//        }
//    }
}
//--------------------------------------------------------------

void ofApp::setupArduino(){
    
    
//   int reading = arduino.getAnalog(0);
    
    

}
//--------------------------------------------------------------


void ofApp::updateArduino(){

    arduino.update();
    

    ofLog(reading);
    
}





void ofApp::meshShit(){
    

    
    
    

    fbo1.begin();

    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
                int i = x + W * y;
                    ofPoint p = mesh.getVertex( i );
            
                    float scaleX = videoWidth;
                    float scaleY = videoHeight;
            
                    int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
                    p.z =  ofNoise(x * 0.6, y * 0.4, ofGetElapsedTimef() * 0.5) * 60;
                    mesh.setVertex( i, p );
            
                    mesh.setColor(i , ofColor(ofRandom(50, 250), ofRandom(250,0), ofRandom(250,0), 10));
                }
        }

    
    
    fbo1.end();
}


//--------------------------------------------------------------

void ofApp::meshShitTwo(){
    
    fbo1.begin();
    
    
    ofClear(255,255,255,0);
    
    fbo1.end();
    
    fbo2.begin();
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            int i = x + W * y;
                ofPoint p = mesh.getVertex( i );
            
                    float scaleX = videoWidth;
                    float scaleY = videoHeight;
            
                    int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
                    p.z =  ofNoise(x * 0.3, y * 0.3, ofGetElapsedTimef() * 0.5) * 10;
                    mesh.setVertex( i, p );
            
                    mesh.setColor(i , ofColor(255, ofRandom(0, 250), 50, 20));
            
        }
    }

    
    
    fbo2.end();

}


void ofApp::meshShitThree(){
    
    
    
    
    
    
    fbo3.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            int i = x + W * y;
            ofPoint p = mesh.getVertex( i );
            
            float scaleX = videoWidth;
            float scaleY = videoHeight;
            
            int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
            p.z =  ofNoise(x * 0.6, y * 0.4, ofGetElapsedTimef() * 0.5) * 60;
            mesh.setVertex( i, p );
            
            mesh.setColor(i , ofColor(ofRandom(50, 250), ofRandom(250,0), ofRandom(250,0), 20));
        }
    }
    
    
    
    fbo3.end();
}

void ofApp::meshShitFour(){
    
    
    
    
    
    
    fbo4.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            int i = x + W * y;
            ofPoint p = mesh.getVertex( i );
            
            float scaleX = videoWidth;
            float scaleY = videoHeight;
            
            int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
            p.z =  ofNoise(x * 0.6, y * 0.4, ofGetElapsedTimef() * 0.5) * 60;
            mesh.setVertex( i, p );
            
            mesh.setColor(i , ofColor(ofRandom(50, 250), ofRandom(250,0), ofRandom(250,0), 10));
        }
    }
    
    
    
    fbo4.end();
}
void ofApp::meshShitFive(){
    
    
    
    
    
    
    fbo5.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            int i = x + W * y;
            ofPoint p = mesh.getVertex( i );
            
            float scaleX = videoWidth;
            float scaleY = videoHeight;
            
            int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
            p.z =  ofNoise(x * 0.6, y * 0.4, ofGetElapsedTimef() * 0.5) * 60;
            mesh.setVertex( i, p );
        
            mesh.setColor(i , ofColor(ofRandom(50, 250), ofRandom(250,0), ofRandom(250,0), 10));
        }
    }
    
    
    
    fbo5.end();
}
void ofApp::meshShitSix(){
    
    
    
    
    
    
    fbo6.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            int i = x + W * y;
            ofPoint p = mesh.getVertex( i );
            
            float scaleX = videoWidth;
            float scaleY = videoHeight;
            
            int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
            p.z =  ofNoise(x * 0.6, y * 0.4, ofGetElapsedTimef() * 0.5) * 60;
            mesh.setVertex( i, p );
            
            mesh.setColor(i , ofColor(ofRandom(50, 250), ofRandom(250,0), ofRandom(250,0), 10));
        }
    }
    
    
    
    fbo6.end();
}




void ofApp::meshShitSeven(){
    
    
    
    
    
    
    fbo7.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            int i = x + W * y;
            ofPoint p = mesh.getVertex( i );
            
            float scaleX = videoWidth;
            float scaleY = videoHeight;
            
            int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
            p.z =  ofNoise(x * 0.6, y * 0.4, ofGetElapsedTimef() * 0.5) * 60;
            mesh.setVertex( i, p );
            
            mesh.setColor(i , ofColor(ofRandom(50, 250), ofRandom(250,0), ofRandom(250,0), 10));
        }
    }
    
    
    
    fbo7.end();
}
void ofApp::meshShitEight(){
    
    
    
    
    
    
    fbo8.begin();
    
    
    for (int y=0; y<H; y++) {
        for (int x=0; x<W; x++) {
            int i = x + W * y;
            ofPoint p = mesh.getVertex( i );
            
            float scaleX = videoWidth;
            float scaleY = videoHeight;
            
            int index = ((x * scaleX) + videoWidth * (y * scaleY)) * 4;
            // int brightness = fboPixels[index] / 4;
            
            p.z =  ofNoise(x * 0.6, y * 0.4, ofGetElapsedTimef() * 0.5) * 60;
            mesh.setVertex( i, p );
            
            mesh.setColor(i , ofColor(ofRandom(50, 250), ofRandom(250,0), ofRandom(250,0), 10));
        }
    }
    
    
    
    fbo8.end();
}



//--------------------------------------------------------------


void ofApp::loadPlay(){
    
    randNum=0;
    
        if(myPlayer.getIsMovieDone()){
                randNum++;
                }
    
    
    switch(randNum){
        
    case 0:
           
            myPlayer.loadMovie("blue.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            
          
            
            
            break;
        
    case 1:
            
            myPlayer.loadMovie("blueTwo.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            
            

            
            
                if(myPlayer.isPlaying()){
            
                    randNum=1;
                    
                }
            
        break;
        
    case 2:
            
            myPlayer.loadMovie("blue.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            if(myPlayer.isPlaying()){
            
                randNum = 2;
            
            }
    
    break;
        
        
    case 3:
            myPlayer.loadMovie("blueTwo.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            
            randNum = 3;
            
        
    break;
    
    case 4:
            
            myPlayer.loadMovie("blue.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            randNum = 4;
            
        break;
            
    case 5:
            myPlayer.loadMovie("blueTwo.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            randNum = 5;
        
        
        break;
        
    case 6:
            myPlayer.loadMovie("blue.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            randNum = 6;
        
        break;
            
    case 7:
            myPlayer.loadMovie("blueTwo.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
            
            
            randNum = 7;
        
        break;
        
    case 8:
            myPlayer.loadMovie("blue.mp4");
            myPlayer.setLoopState(OF_LOOP_NONE);
            myPlayer.play();
        
        
            
            randNum = 8;
        break;
        
        
        
        default:
        
        ofBackground(0,0,0);
        
        
    
    }

}

//--------------------------------------------------------------

void ofApp::loadMesh(){

//    randNum=0;
//    
//    switch(randNum){
//    
//    
//        case 0:
//            
//            fbo1.begin();
//            
//            meshShit();
//            
//            fbo1.end();
//            
//            
//            fbo1.begin();
//            ofColor(255,255,255,0);
//            fbo1.end();
//            
//            break;
//            
//            
//        case 1:
//            
//           
//            
//            
//            fbo2.begin();
//            
//            meshShitTwo();
//            
//            fbo2.end();
//            
//            break;
//            
//        case 2:
//            
//            break;
//        case 3:
//            
//            break;
//            
//        case 4:
//            
//            
//            
//            break;
//            
//        case 5:
//            
//            
//            
//        
//            break;
//    
//    
//    
//    
//    }





}

//--------------------------------------------------------------

void ofApp::draw(){
    ofBackground(0);
    ofSetHexColor(0xffffff);
    myPlayer.draw(0,0);
    
   
    
        ofPushMatrix();
    
    
            ofTranslate( ofGetWidth()/2, ofGetHeight()/2, 0 );
            image.bind();
            mesh.draw();
            image.unbind();
    
    
        ofPopMatrix();
    
    
 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if(key == 't'){
        loadPlay();
        update();
    
    }else{
    
        ofBackground(0);
    
    }
    
    
    
    
    
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
