//
//  bullet.hpp
//  skeet
//
//  Created by Mauricio Takashi Kiyama on 11/6/17.
//  Copyright © 2017 a+. All rights reserved.
//

#define BULLET_SPEED 10.0

#ifndef bullet_h
#define bullet_h

#include <stdio.h>
#include "flyingObject.h"
#include "uiDraw.h"
#include "rifle.h"
#include <cmath> // used for sin, cos, and M_PI


class Bullet : public FlyingObject
{

public:
    Bullet();
    void kill();
    void draw();
    void fire(Point, float);
    
};


#endif /* bullet_h */
