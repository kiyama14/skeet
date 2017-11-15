//
//  bullet.cpp
//  skeet
//
//  Created by Mauricio Takashi Kiyama on 11/6/17.
//  Copyright © 2017 a+. All rights reserved.
//

#include "bullet.h"
#include "rifle.h"
#include <cmath> //for fire(int angle) cos and sin


/*********************************
 * BULLET
 *   default constructor
 *********************************/
Bullet :: Bullet()
{
    setAlive(true);
}

/*********************************
 * KILL
 *   Makes the bird dissapear
 *********************************/
void Bullet :: kill()
{
    setAlive(false);
}

/*********************************
 * DRAW
 *   Draws the bullet
 *********************************/
void Bullet :: draw()
{
    drawDot(getPoint());
}

/*********************************
 * FIRE
 *   fires the bullet
 *********************************/
void Bullet :: fire(Point riflePoint, float angle)
{
    setPoint(riflePoint);
    
    Velocity velocity;
    
    velocity.setDx(cos((float)(180 - angle) * M_PI/180) * BULLET_SPEED);
    velocity.setDy(sin((float)(180 - angle) * M_PI/180) * BULLET_SPEED);
    
    setVelocity(velocity);
}

