
#include <iostream>
#include <vector>
using namespace std;

struct Movie {
    string title;
    int releaseYear;

};

int main()
{
	// StructuredBinding //
	Movie movie = { "The Shawshank Redemption", 1994 };
	auto [title, releaseYear] = movie;
	cout << "Title: " << title << endl;

	// Array of Structures //
	vector <Movie> movies = { {"The Shawshank Redemption", 1994}, {"The Godfather", 1972}, {"The Dark Knight", 2008} };
	movies.push_back({ "The Godfather: Part II", 1974 });

	for (const auto& movie : movies) {
		cout << "Title: " << movie.title << endl;
		cout << "Release Year: " << movie.releaseYear << endl;
	}
}


