#include <iostream>
using namespace std;

struct Date {
	int year = 1900;
	short month = 1;
	short day = 1;
};


struct Movie
{
	string title;
	Date releaseDate;
	bool isPopular;

	/*// Method (function that is part of an object)
	bool operator==(const Movie& movie) const //reference parameter to movie in memory
	{
		return (
			title == movie.title &&
			releaseDate == movie.releaseDate
			);
	}*/

};

struct Point
{
	int x = 0;
	int y = 0;

};


bool operator==(const Point& first, const Point& second)
{
	return (first.x == second.x && first.y == second.y);
}

ostream& operator<<(ostream& stream, Movie& movie)
{
	stream << movie.title;
	return stream;
}

ostream& operator<<(ostream& stream, const Point& point)
{
	return stream << "(" << point.x << "," << point.y << ")";
}

int main()
{
	Movie movie1 = {
		"Terminator",
		{1984, 6, 1}
	};

	Point x = { 1, 2 };
	Point y = { 1, 2 };

	cout << (x == y) << endl;
	cout << x << endl;
	cout << movie1;
}

