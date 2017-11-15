//
//  flyingObject.cpp
//  skeet
//
//  Created by Mauricio Takashi Kiyama on 11/6/17.
//  Copyright © 2017 a+. All rights reserved.
//

#include "flyingObject.h"
#include "point.h"
#include "velocity.h"

/*********************************
 * GET POINT
 *
 *********************************/
Point FlyingObject :: getPoint()
{
    return point;
}

/*********************************
 * GET VELOCITY
 *
 *********************************/
Velocity FlyingObject :: getVelocity()
{
    return velocity;
}

/*********************************
 * IS ALIVE
 *
 *********************************/
bool FlyingObject :: isAlive()
{
    return alive;
}

/*********************************
 * SET POINT
 *
 *********************************/
void FlyingObject :: setPoint(Point point)
{
    this->point = point;
}

/*********************************
 * SET VELOCITY
 *
 *********************************/
void FlyingObject :: setVelocity(Velocity velocity)
{
    this->velocity = velocity;
}

/*********************************
 * SET ALIVE
 *
 *********************************/
void FlyingObject :: setAlive(bool alive)
{
    this->alive = alive;
}

/*********************************
 * KILL
 *
 *********************************/
void FlyingObject :: kill()
{ 
    alive = false;
}

void FlyingObject :: advance()
{
    point.addX(velocity.getDx());
    point.addY(velocity.getDy());
}
