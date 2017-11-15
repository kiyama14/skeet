#include <stdio.h>
#include "velocity.h"

Velocity :: Velocity()
{
    dx = 0;
    dy = 0;
}
Velocity :: Velocity(float dx, float dy)
{
    this->dx = dx;
    this->dy = dy;
}

float Velocity :: getDx() const
{
    return dx;
}
float Velocity :: getDy() const
{
    return dy;
}
void Velocity :: setDx(float dx)
{
    this->dx = dx;
}
void Velocity :: setDy(float dy)
{
    this->dy = dy;
}
