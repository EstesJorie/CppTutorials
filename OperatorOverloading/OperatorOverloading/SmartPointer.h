#pragma once
#include <memory>

class SmartPointer
{
public:
	explicit SmartPointer(int* ptr);

	~SmartPointer();
private:
	int* ptr;
};
