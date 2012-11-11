#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"

class SceneObject : public ofxBox2dBaseShape{
    
public:
    SceneObject( );
    ~SceneObject();
private:
    ofVec2f pos;
    
    
};
