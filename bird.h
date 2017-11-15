//
//  bird.h
//  skeet
//
//  Created by Mauricio Takashi Kiyama on 11/6/17.
//  Copyright © 2017 a+. All rights reserved.
//

#ifndef bird_h
#define bird_h

#include <stdio.h>
#include "uiDraw.h"
#include "flyingObject.h"



/********************************************
* BIRD
*  Also the standard bird
********************************************/
class Bird : public FlyingObject
{
    
public:
    Bird();
    Bird(Point point);
    
    virtual void draw();
    virtual int hit();
    
private:
    Point point;
    Velocity velocity;
    
    
};

/********************************************
* TOUGH BIRD
*
********************************************/
class ToughBird : public Bird {
    
public:
    ToughBird();
    virtual void draw();
    int hit();
    
private:
    int hits;
    Point point;
    Velocity velocity;
    
    
};

/********************************************
 * SACRED BIRD
 *  Also the standard bird
 ********************************************/
class SacredBird : public Bird {
    
public:
    SacredBird();
    SacredBird(Point point);
    virtual void draw();
    int hit();
    
private:
    int hits;
    Point point;
    Velocity velocity;
    
};



#endif /* bird_h */
