#pragma once

#include "ofMain.h"
#include "obj.h"
#include "person.h"
#include "light.h"

class Scene : public ofBaseApp{
    
public:
    Scene( );
    ~Scene();
    
    void update();
    void draw();
    
    void loadScene(String path); // Load obj
    void resetScene(); // reset all vectors
    
    void addPerson(ofVec2f _loc); // Add a person!
    void addLight(ofVec2f _loc); // Add a light!
    
private:
    int numOfLights;
    int numofPeople;
    int numOfcameras;
    
    vector<PersonObject> ppl;
    vector<LightObject> lights;
    
    
};
