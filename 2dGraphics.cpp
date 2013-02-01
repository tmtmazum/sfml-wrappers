#include "2dGraphics.h"

// GRAPHICS2D::POS

Graphics2d::pos::pos(int a = 0, int b = 0)
{
	x = a;
	y = b;
}

void Graphics2d::pos::offset(pos a)
{
	this->x += a.x;
	this->y += a.y;
}

void Graphics2d::pos::move_to(int c, int d)
{
    this->x = c;
    this->y = d;
}

// GRAPHICS2D::RECTANGLE

Graphics2d::rectangle::rectangle(pos position = pos(10,10), int width = 10, int height = 10)
{
    this->x = position.x;
    this->y = position.y;

    this->width = width;
    this->height = height;
}

Graphics2d::rectangle::rectangle(int x, int y, int width = 10, int height = 10)
{
    this->x = x;
    this->y = y;

    this->width = width;
    this->height = height;
}

Graphics2d::rectangle::rectangle(int width = 20, int height = 10)
{
    this->width = width;
    this->height = height;
}

Graphics2d::group::group(pos p)
{
    x = p.x;
    y = p.y;
}

void Graphics2d::group::add(pos dr)
{
    dr.x += this->x;
    dr.y += this->y;
    objects.push_back(dr);
}
