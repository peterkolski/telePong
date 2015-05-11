//
//  TouchHandler.h
//  telePong
//
//  Created by Peter A. Kolski on 09.05.15.
//
//

#ifndef __telePong__TouchHandler__
#define __telePong__TouchHandler__

#include <iostream>
#include "PongHelpers.h"
#include "ofxOsc.h"
#include "ofxTuio.h"


namespace telePong
{

class TouchHandler{
public:
    void                update();
    void                setBoundaries( BoundaryType boundary )  { boundaries_ = boundary; }
    void                setup( int port, string adress );
    void                drawVerbose();

private:
    void	tuioAdded(      ofxTuioCursor & tuioCursor);
    void	tuioRemoved(    ofxTuioCursor & tuioCursor);
    void	tuioUpdated(    ofxTuioCursor & tuioCursor);
    
    ofxTuioClient       tuioClient;

    
    BoundaryType        boundaries_;
    string              oscAdress_  = "";
    int                 oscPort_    = 3333;
    
};
    
}   // namespace telePong


#endif /* defined(__telePong__TouchHandler__) */
