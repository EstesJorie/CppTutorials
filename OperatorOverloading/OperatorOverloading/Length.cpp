#include "Length.h"

#include <iostream>

Length::Length(int value) : value(value)
{
}

inline int Length::getValue() const
{
	return value;
}

void Length::setValue(int value)
{
	Length::value = value;
}


bool Length::operator==(const Length& otherVal) const
{
	return value == otherVal.value;
}

bool Length::operator==(int otherVal) const
{
	return value == otherVal;
}

bool Length::operator!=(int otherVal)
{
	return !(value == otherVal); //implement the inverse of the equality operator
}

std::strong_ordering Length::operator<=>(const Length& otherVal) const
{
	return value <=> otherVal.value;
}

Length Length::operator+(const Length& other) const
{
	return Length(value + other.value);
}

Length& Length::operator+=(const Length& other)
{
	value += other.value;
	return *this;
}

Length& Length::operator=(const Length& other)
{
	std::cout << "Object Assigned\n";
	value = other.value;
	return *this;
}

Length& Length::operator++()
{
	value++;
	return *this;
}

Length Length::operator++(int)
{
	Length copy = *this;
	operator++();
	return copy;
}

Length::operator int() const
{
	return value;
}


/*bool Length::operator<(const Length& otherVal) const
{
	return value < otherVal.value;
}

bool Length::operator<=(const Length& otherVal) const
{
	return !(value > otherVal.value);
};

bool Length::operator>(const Length& otherVal) const
{
	return value > otherVal.value;
}

bool Length::operator>=(const Length& otherVal) const
{
	return !(value < otherVal.value);
};*/

std::ostream& operator<<(std::ostream& stream, const Length& length)
{
	stream << length.getValue();
	/*
	length.x //can access any private members due to it being a friend
	*/
	return stream;
}

std::istream& operator>>(std::istream& stream, Length& length)
{
	int tempVal;
	stream >> tempVal;
	length.setValue(tempVal);
	return stream;
}
