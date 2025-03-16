#pragma once

#include "FileReader.h"
#include "FileWriter.h"

class FileIO : public FileReader, public FileWriter
{
public:
	FileIO(std::string fileName) : FileReader(fileName), FileWriter(fileName)
	{
		
	}

};
