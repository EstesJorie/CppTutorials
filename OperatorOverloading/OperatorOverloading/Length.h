#pragma once

#include <compare>
#include <ostream>
#include <istream>

class Length
{
public:
	Length() = default;
	explicit Length(int value);

	bool operator==(const Length& otherVal) const;
	bool operator==(int otherVal) const;
	bool operator!=(int otherVal);

	/*bool operator<(const Length& otherVal) const;
	bool operator<=(const Length& otherVal) const;
	bool operator>(const Length& otherVal) const;
	bool operator>=(const Length& otherVal) const;*/

	std::strong_ordering operator<=>(const Length& otherVal) const;

	Length operator+(const Length& other) const;
	Length& operator+=(const Length& other);
	Length& operator=(const Length& other);
	Length& operator++(); //prefix form (++int)
	Length operator++(int); //postfix form (int++)
	operator int() const;

	int getValue() const;

	/*int getValue() const
	{
		return value;
	}*/ //in-line function

	void setValue(int value);

private:
	int value;
	int x;
	friend std::ostream& operator<<(std::ostream& stream, const Length& length);

};

std::ostream& operator<<(std::ostream& stream, const Length& length);
std::istream& operator>>(std::istream& stream, Length& length);

