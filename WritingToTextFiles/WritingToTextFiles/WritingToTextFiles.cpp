
#include <fstream>
#include <iostream>
#include <iomanip>
int main()
{
	std::ofstream file;
	file.open("movies.csv");
	if (file.is_open())
	{
		file << "id, title, release year\n";
		file << "1, Terminator, 1984\n";
		file.close();
	}
}

