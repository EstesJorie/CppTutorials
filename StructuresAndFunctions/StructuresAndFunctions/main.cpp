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

	// Method (function that is part of an object)
	bool operator==(const Movie& movie) const //reference parameter to movie in memory
	{
		return (
			title == movie.title &&
			releaseDate.day == movie.releaseDate.day &&
			releaseDate.month == movie.releaseDate.month &&
			releaseDate.year == movie.releaseDate.year
			);
	}

};

Movie getMovie() {
	return { "Terminator", 1984 };
}

void showMovie(Movie* movie) {
	/* cout << (*movie).title */
	cout << movie->title; //structure pointer operator
}

int main()
{
	auto movie = getMovie();
	showMovie(&movie);
}

