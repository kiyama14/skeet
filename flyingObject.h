//
//  flyingObject.h
//  skeet
//
//  Created by Mauricio Takashi Kiyama on 11/6/17.
//  Copyright © 2017 a+. All rights reserved.
//

#ifndef flyingObject_h
#define flyingObject_h

#include <stdio.h>
#include "velocity.h"
#include "point.h"

class FlyingObject : public Point , public Velocity {
    
    
public:
    Point getPoint();
    Velocity getVelocity();
    bool isAlive();
    
    void setPoint(Point);
    void setVelocity(Velocity velocity);
    void setAlive(bool);
    virtual void kill();
    void advance();
    virtual void draw() =0;
    
private:
    Velocity velocity;
    Point point;
    bool alive;
    
};

#endif /* flyingObject_h */
