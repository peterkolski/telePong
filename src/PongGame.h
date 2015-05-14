//
//  PongGame.h
//  telePong
//
//  Created by Peter A. Kolski on 03.05.15.
//
//

#ifndef __telePong__PongGame__
#define __telePong__PongGame__

#include <iostream>
#include "PongHelpers.h"
#include "ofxBox2d.h"

namespace telePong
{

class PongGame {
    
public:
    PongGame()
    {
        ballRadius_         = 30;
        speedRestriction_   = 10;
        worldRect_          = ofGetWindowRect();
//        worldRect_          = ofRectangle( ofGetWindowRect().getPosition() , ofGetWindowWidth() + (ballRadius_*4), ofGetWindowHeight() );
    }
    ~PongGame();
    void                    update();
    void                    draw();
    void                    init();
    void                    startBall();
    void                    rescaleBounds();
    void                    rescaleBounds( ofRectangle bounds );
    void                    setBoundaries( BoundaryType    *boundary )      { boundaries_ = boundary; }
    vector<ofRectangle*>    &getPaddels()                                   { return boundaries_->paddels; }
    void                    setSpeedRestriction( int speed )                { speedRestriction_ = speed; }

    shared_ptr< ofxBox2dRect >              paddleLeft_, paddleRight_;
    
private:
    void updatePositions();
    void restrictSpeed(     shared_ptr< ofxBox2dRect > mBall, int maxSpeed, int maxRotSpeed );
    void catchBugVertical(  shared_ptr< ofxBox2dRect > mBall, double tolerance  );
    void resetBall(         shared_ptr< ofxBox2dRect > mBall );
    
    BoundaryType                           *boundaries_;

    shared_ptr< ofxBox2dRect >              ball_;
    shared_ptr< ofxBox2d >                  world_;
    ofRectangle                             worldRect_;
    int                                     ballRadius_;
    int                                     speedRestriction_;

};

}   // namespace telePong


#endif /* defined(__telePong__PongGame__) */
