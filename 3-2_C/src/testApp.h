#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"

class testApp : public ofBaseApp {
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void audioRequested(float * input, int bufferSize, int nChannels);
    
    int sampleRate; //サンプリング周波数
    int bufSize; //バッファの大きさ
    float pan; //定位
    float amp; //音量
    float phase; //位相
    float frequency; //周波数
    int waveShape; //波形
    float lAudio[256]; //左チャンネル波形
    float rAudio[256]; //右チャンネル波形
};

#endif