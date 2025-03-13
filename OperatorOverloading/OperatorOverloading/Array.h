#pragma once

#include <cstddef>

class Array
{
public:
	explicit Array(size_t size);
	~Array();

	int& operator[](size_t index);

private:
	int* values;
	size_t size;
};
