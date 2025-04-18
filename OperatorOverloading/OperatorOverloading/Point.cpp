﻿#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const
{
	return x;
}

void Point::setX(int x)
{
	Point::x = x;
}


int Point::getY() const
{
	return y;
}

void Point::setY(int y)
{
	Point::y = y;
}

bool Point::operator==(const Point& other) const
{
	return (x == other.x) && (y == other.y);
}

Point& Point::operator++()
{
	x++;
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Point& point)
{
	stream << "(" << point.getX() << "," << point.getY() << ")\n";
	return stream;
}
