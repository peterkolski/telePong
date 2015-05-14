//
//  PongHelpers.h
//  telePong
//
//  Created by Peter A. Kolski on 09.05.15.
//
//

#ifndef telePong_PongHelpers_h
#define telePong_PongHelpers_h

#include "ofMain.h"
#include <set>

namespace telePong
{
    using namespace std;

struct BoundaryType
{
    std::vector<ofRectangle*>    activeArea;
    std::vector<ofRectangle*>    paddels;
};
    
enum StateOfArea
{
    Paddle,
    ActiveArea,
    InvalidArea
};

enum Side
{
    left,
    right,
    middle
};

struct ActivePoint
{
    int             sessionID;
    ofPoint         position;
    StateOfArea     state;
    Side            side;
};

    
}   // namespace telePong


#endif
