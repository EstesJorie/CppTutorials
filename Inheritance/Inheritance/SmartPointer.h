#pragma once
#include <memory>

class SmartPointer
{
public:
	explicit SmartPointer(int* ptr);

	~SmartPointer();

	int& operator*();
private:
	int* ptr;
};
