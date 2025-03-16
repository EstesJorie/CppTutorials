#pragma once

//Abstract Class (not instantiation, purely to be inherited by dervied classes)

class Widget
{
public:
	Widget();
	virtual ~Widget();
	Widget(bool enabled);

	virtual void draw() const = 0; //pure virtual method (does not need implementation in .cpp)
	void enable();
	void disable();
	bool isEnabled() const;

private:
	bool enabled;

protected:
	int width;
};
