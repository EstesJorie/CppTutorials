#pragma once

#include <ostream>

class Point
{
public:
	Point(int x, int y);

	int getX() const;
	int getY() const;

	void setY(int y);
	void setX(int x);

	bool operator==(const Point& other) const;

private:
	int x;
	int y;
};

std::ostream& operator<<(std::ostream& stream, const Point& point);

