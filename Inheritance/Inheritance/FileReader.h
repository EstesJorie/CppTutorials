#pragma once
#include <iostream>
#include <string>

class FileReader
{
public:
	FileReader(std::string fileName)
	{
		std::cout << "Constructor of FileReader\n";
	}

	std::string fileName()
	{
		return "filename";
	}

	std::string read()
	{
		return "Hello World\n";
	};
};
