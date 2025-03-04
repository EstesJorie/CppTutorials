#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

struct Movie
{
	string title;
	int year;
};

Movie parseMovie(string str)
{
	stringstream stream;
	stream.str(str);

	Movie movie;
	getline(stream, movie.title, ',');
	stream >> movie.year;

	return movie;
}

string to_string(double number, int precision)
{
	ostringstream stream;
	stream << fixed << setprecision(precision) << number;
	return stream.str();
}

int main()
{
	string str = "10 20";
	istringstream stream;
	stream.str(str);

	int first;
	int second;
	stream >> first;
	stream >> second;

	cout << first + second << endl;

	auto movie = parseMovie("Terminator 1, 1984");
	cout << movie.title <<  " " << movie.year << endl;




}
