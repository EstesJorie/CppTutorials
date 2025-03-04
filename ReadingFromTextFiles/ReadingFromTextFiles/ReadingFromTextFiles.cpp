
#include <iostream>
#include <fstream>
#include <string>

struct Movie
{
	int id;
	std::string title;
	int release_year;
};

int main()
{
	std::ifstream file;
	file.open("movies.csv");
	if (file.is_open())
	{
		std::string str;
		std::getline(file, str);
		while (!file.eof())
		{
			std::getline(file, str, ',');
			if (str.empty()) continue;

			Movie movie;
			movie.id = std::stoi(str); //str is a temporary variable

			std::getline(file, str, ',');
			movie.title = str;

			std::getline(file, str, ',');
			movie.release_year = std::stoi(str);

			std::cout << str << std::endl;
		}
		std::cout << str;
		file.close();
	}
}

