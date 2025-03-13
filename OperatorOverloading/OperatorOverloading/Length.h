#pragma once

#include <compare>
#include <ostream>
#include <istream>

class Length
{
public:
	Length() = default;
	Length(const Length& other) = delete;
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

	int getValue() const;
	void setValue(int value);

private:
	int value;
	int x;
	friend std::ostream& operator<<(std::ostream& stream, const Length& length);

};

std::ostream& operator<<(std::ostream& stream, const Length& length);
std::istream& operator>>(std::istream& stream, Length& length);

