#pragma once
#include <iostream>

class FileWriter
{
public:
	FileWriter(std::string fileName)
	{
		std::cout << "Constructor of FileReader\n";
	}

	std::string fileName()
	{
		return "filename";
	}

	void write(std::string content)
	{
		std::cout << content;
	}
};
